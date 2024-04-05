#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b);

int main(){
	int num = 0;
	int x = 0;
	for(int i=1;i<2021;i++){
		for(int j=1;j<2021;j++){
			x = gcd(i,j);
			if(x == 1){
				num++;
			}
		}
	}
	printf("%d",num);
	return 0;
}

int gcd(int a,int b){
	int c=0;
	if(a<b){
		swap(a,b);
	}
	while(a%b != 0){
		c = a % b;
		a = b;
		b = c;
	}
	return b;
} 
