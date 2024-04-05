#include <bits/stdc++.h>

using namespace std;

int main(){
	int num[7];
	long long a,b,n,week,weeknum;
	long ans = 0;
	long day = 1;
	
	cin >> a;
	cin >> b;
	cin >> n;
	
	weeknum = a*5 + 2*b;
	week = (n + weeknum - 1)/weeknum;
	n -= (week-1)*weeknum;
	
		
	while(n>0){
		if(day<=5)
			n -= a;
		else
			n -= b;
		
		if(n>0)
			day++;
	}
	
	ans = 7*(week-1);
	ans += day;
	cout << ans << endl;
	
	return 0;
} 
