#include <bits/stdc++.h>

using namespace std;

int main(){
	int sum = 1225;
	
	for(int i=1;i<=48;i++){
		for(int j=i+2;j<=48;j++){
			if(sum-2-2*i-2*j+i*(i+1)+j*(j+1)==2015){
				if(i!=10&&j!=27)
					cout << i;
			}
		}
	}
	return 0;
} 
