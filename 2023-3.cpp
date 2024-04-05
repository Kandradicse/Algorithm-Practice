#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,max,min,tem1,tem2,maxA;
	cin >> n;
	int A[n],B[n];
	
	maxA = 0;
	tem1 = -1;
	tem2 = -1;
	
	for(int i=0;i<n;i++){
		cin >> A[i];
		cin >> B[i];
		if(A[i]>maxA)
			maxA = A[i];
	}
	
	for(int a=1;a<=maxA;a++){
		for(int j=0;j<n;j++){
			if(floor(A[j]/a) != B[j]){
				break;
			}
			tem1 = j;
		}
		if(tem1+1==n){
			min = a;
			break;	
		}
		tem1 = -1;
	}
	
	for(int b=maxA;b>0;b--){
		for(int j=0;j<n;j++){
			if(floor(A[j]/b) != B[j]){
				break;
			}
			tem2 = j;
		}
		if(tem2+1==n){
			max = b;
			break;
		}
		tem2 = -1;
	}
	
	printf("%d %d",min,max);
	return 0;
}
