#include <bits/stdc++.h>

using namespace std;

int main(){
	double w[470];
	memset(w,0,sizeof(w));
	
	int n,l,num;
	num = 1;
	for(int i=1;i<31;i++){
		l = i;
		while(l){
			cin >> n;
			w[num] = n;
			if(l!=i){
				w[num] += w[num/2]/2;
			}
			if(l!=1){
				w[num] += w[(int)ceil(num/2)]/2;
			}
			l--;
			num++;
		}
	}
	
	long long max = 0;
	long long min = 9999999999;
	for(int i=436;i<466;i++){
		if(w[i]<min)
			min = w[i];
		if(w[i]>max)
			max = w[i];
	}
	
	cout << min <<endl;
	cout << max;
	return 0;
} 
