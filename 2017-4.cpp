#include <bits/stdc++.h>

using namespace std;

int main(){
	double p,c,sum;
	sum = 0;
	while(cin>>p>>c){
		sum += p*c/100;
	}
	int num = ceil(sum/100);
	num *= 100;
	cout << num << endl;
	return 0;
}
