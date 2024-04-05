#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b);

int main(){
	int sort,num,min,g;
	cin>>sort;
	num = 0;
	min = 9999;	
	bool flag[100001];
	int kind[sort];
	
	memset(flag,false,sizeof(flag));
	
	for(int i=0;i<sort;i++){
		cin>>kind[i];
		if(kind[i]==1){
			printf("0");
			return 0;
		}	
		flag[kind[i]] = true;
	}
	if(sort==1){
		printf("INF");
		return 0;	
	}
	
	g = gcd(kind[0],kind[1]);
	
	for(int a=2;a<sort;a++){
		g = gcd(g,kind[a]);
	}
	if(g != 1){
		printf("INF");
		return 0;
	}
	
	for(int s=0;s<sort;s++){
		for(int m=1;m<=100000;m++){
			if(flag[m]==true && kind[s]+m<=100000){
				flag[kind[s]+m] = true;
			}
		}
	}
	
	for(int n=1;n<=100000;n++){
		if(!flag[n])
			num++;
	}
	
	printf("%d",num);
	return 0;
}

int gcd(int a,int b){
	int c;
	if(a<b)
		swap(a,b);
	while(a % b != 0){
		c = a % b;
		a = b;
		b = c;
	}
	return b;	
}
