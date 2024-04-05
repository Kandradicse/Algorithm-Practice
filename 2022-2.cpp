#include <bits/stdc++.h>

int main(){
	int mon[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int date[8] = {2,0,2,2,0,0,0,0};
	int num;
	
	for(int i=1;i<10;i++){
		date[5] = i;
		for(int j=1;j<=mon[i];j++){
			if(j<10){
				date[6] = 0;
				date[7] = j;
			}
			else{
				date[6] = j/10;
				date[7] = j%10;
			}
			
			if((date[3]+1==date[4]&&date[4]+1==date[5])||(date[5]+1==date[6]&&date[4]+1==date[5])||(date[5]+1==date[6]&&date[6]+1==date[7])){
				num++;
			}
		}
	}
	
	for(int i=10;i<13;i++){
		date[5] = i%10;
		date[4] = i/10;
		for(int j=1;j<=mon[i];j++){
			if(j<10){
				date[6] = 0;
				date[7] = j;
			}
			else{
				date[6] = j/10;
				date[7] = j%10;
			}
			
			if((date[3]+1==date[4]&&date[4]+1==date[5])||(date[5]+1==date[6]&&date[4]+1==date[5])||(date[5]+1==date[6]&&date[6]+1==date[7])){
				num++;
			}
		}
	}
	printf("%d",num);
	return 0;
} 
