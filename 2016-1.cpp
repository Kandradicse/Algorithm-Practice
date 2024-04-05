#include <bits/stdc++.h>

int main(){
	int num;
	
	for(int i=1;i<100;i++){
		for(int j=100;j>0;j--){
			if(j>i){
				num = (i+j)*(j-i+1)/2;
				if(num==236){
					printf("%d\n",i);
					break;
				}
			}
			else
				break;
		}
	}
	
	
	return 0;
}
