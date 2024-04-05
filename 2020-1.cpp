#include <stdio.h>

int main(){
	int ans,j;
	
	ans = 0;
	
	for(int i=1;i<=2020;i++){
		j = i;
		while(j){
			if(j%10 == 2){
				ans++;
			}
			j /= 10;
		}
	}
	
	printf("%d",ans);
	return 0;
}
