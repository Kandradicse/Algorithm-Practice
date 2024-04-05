#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,head,tail,ans;
	cin >> n;
	cin >> a;
	ans = 0;
	
	tail = a%10;
		
	while(n-1){
		cin >> a;
		for(int i=1000000000;i>=10;i/=10){
			if(a/i != 0){
				head = a/i;
				break;
			}
		}
		
		if(head != tail){
			ans++;
		}
		else
			tail = a%10;
		n--;
	}
	
	cout << ans << endl;
	return 0;
} 
