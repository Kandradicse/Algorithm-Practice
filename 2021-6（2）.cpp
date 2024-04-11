#include<stdio.h>
using namespace std;
const int N=105,M=1e5+5;
int ans,n,dp[N][M];
inline int read(){
	int x=0,f=1;char ch=getchar();
	while (ch<'0'||ch>'9'){if (ch=='-') f=-1;ch=getchar();}
	while (ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}
int abs(int x){return x>0?x:-x;}
int main(){
	n=read();
	dp[0][0]=1;
	for(int i=1;i<=n;i++){
		int a=read();
		for(int j=0;j<=100000;j++){
			dp[i][j]|=dp[i-1][j];
			dp[i][j+a]|=dp[i-1][j];
			dp[i][abs(j-a)]|=dp[i-1][j]; 
		}
	}
	for(int i=1;i<=100000;i++) if(dp[n][i]) ans++;
	printf("%d",ans);
	return 0;
}

