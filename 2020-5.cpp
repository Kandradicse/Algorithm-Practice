#include <bits/stdc++.h>

using namespace std;

int main(){
	int mo[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int mo2[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	int ans = 7580/7;
	int n = 7580;
	int year = 2000;
	int day = 1;
	ans += 3;
	
	while(n>day){
		if(year%4){
			for(int i=1;i<13;i++){
				day += mo2[i];
				if(day>n)
					break;
				if((day-1)%7){
					ans++;
				}
			}
		}
		else{
			for(int i=1;i<13;i++){
				day += mo[i];
				if(day>n)
					break;
				if((day-1)%7){
					ans++;
				}
			}
		}
	}
	
	cout << ans+7580 << endl;
	return 0;
}
