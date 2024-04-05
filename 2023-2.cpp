#include <bits/stdc++.h>

int main(){
	double e;
	double n = 23333333;
	
	for(int x=n/2;x>0;x--){
		e = 0;
		e = e-x*(x/n)*log2(x/n);
		e = e - (n-x)*((n-x)/n)*log2((n-x)/n);
		
		if(e>11625907.5 && e<11625907.6){
			printf("%d\n",x);
			break;
		}
	}
	
	
	return 0;
} 
