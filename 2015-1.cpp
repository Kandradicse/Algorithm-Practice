#include <bits/stdc++.h>

int main(){
	int a,b,c,d,gap,mon;
	int mon1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int mon2[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	int date[4];
	
	a = 2014;
	b = 11;
	c = 9;
	d = 1000;
	
	if(a>2020 || a<1000 || d>1000){
		return 0;
	} 

		
	if(a%4!=0 || (a%100==0 && a%400!=0)){
		gap = mon1[b] - c;
	
		for(int j=b;j<13;j++){
			if(j==b){
				d -= gap;
				mon = j;				
			}

			else{
				d -= mon1[j];
				mon = j;
			}
		
			if(d<=0){
				date[0] = a;
				date[1] = mon;
				date[2] = mon1[mon]+d;
				break;
			}
		}
	
		
	}


	else{
		gap = mon2[b] - c;
	
		for(int x=b;x<13;x++){
			if(x==b){
				d -= gap;
				mon = x;				
			}
			else{
				d -= mon2[x];
				mon = x;				
			}

		
			if(d<=0){
				date[0] = a;
				date[1] = mon;
				date[2] = mon2[mon]+d;
				break;
			}
		}
	
		
	}
	
	

		while(d>0){
			a++;
			
			if(a%4!=0 || (a%100==0 && a%400!=0)){
			
			
			for(int i=1;i<13;i++){
				d -= mon1[i];
				mon = i;
				if(d<=0){
					date[0] = a;
					date[1] = mon;
					date[2] = mon1[mon]+d;
					break;
				}
			}
		}
		
			else{
			
			for(int y=1;y<13;y++){
				d -= mon2[y];
				mon = y;
				
				if(d<=0){
					date[0] = a;
					date[1] = mon;
					date[2] = mon2[mon]+d;
					break;
				}
			}
		}
		}
		
		
		
	
	printf("%d-",date[0]);
	if(date[1]<10){
		printf("0%d-",date[1]);
	}
	else
		printf("%d-",date[1]);
		
	if(date[2]<10){
		printf("0%d",date[2]);
	}
	else
		printf("%d",date[2]);	
	


	return 0;	
}
