#include <stdio.h>

int main(){
	int num[10];
	int k;
	
	//initialisation
	for(int i=0;i<10;i++){
		num[i] = 2021;
	}
	
	for(int j=1; ;j++){
		k = j;
		
		while(k){
			num[k%10]--;
			if(num[k%10]<0){
				printf("%d",j-1);
				return 0;
			}
			k /= 10;
		}
		
	}

}
