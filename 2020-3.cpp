#include <bits/stdc++.h>

using namespace std;

int main(){
	int ans = 1;
	
	for(int n=2;n<=20;n++){
		ans += (n-1)*4;
	}
	
	cout << ans << endl;
	return 0;
}
