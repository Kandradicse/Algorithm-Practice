#include <bits/stdc++.h>

using namespace std;

int main(){
	int num,f,n;
	
	for(int i=10000;i<=99999;i++){
		num = i;
		n = 5;
		while(n){
			if(num%10==4){
				f++;
				break;
			}
			num /= 10;	
			n--;
		}
	}
	cout << 99999-10000+1-f << endl;
	return 0;
}
