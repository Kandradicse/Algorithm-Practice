#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 1000;
	int ans = 0;
	
	while(n/2){
		n /= 2;
		ans++;
	}
	
	cout << ans*3 <<endl;
	return 0;
} 
