#include <bits/stdc++.h>

using namespace std;

int main(){
	int num,ans;
	
	ans = 0;
	for(int i=1;i<=100;i++){
		num = (1+i)*i/2;
		ans += num;
		
	}
	
	cout << ans;
	return 0;
}
