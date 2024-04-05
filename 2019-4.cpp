#include <bits/stdc++.h>

using namespace std;

int main(){
	int team[5][20] = {{97,92,0,0,89,82,0,0,0,95,0,0,94,0,0,0,98,93,0,0},{90,85,0,0,83,86,0,97,0,99,0,0,91,83,0,0,83,87,0,99},{0,96,0,0,97,0,0,96,89,0,96,0,0,87,98,0,99,92,0,96},{0,0,0,80,0,0,87,0,0,0,97,93,0,0,97,93,98,96,89,95},{0,0,93,86,0,0,90,0,0,0,0,98,0,0,98,86,81,98,92,81}};
	int flag[20];
	int sum,max;
	
	max = 0;
	
	memset(flag,0,sizeof(flag));
	
	for(int a=0;a<20;a++){
		flag[a] = 1;
		sum = team[0][a];
		for(int b=0;b<20;b++){
			if(!flag[b]){
				flag[b] = 1;
				sum += team[1][b];
			}
			else
				continue;
			for(int c=0;c<20;c++){
				if(!flag[c]){
					flag[c] = 1;
					sum += team[2][c];
				}
				else
					continue;
				for(int d=0;d<20;d++){
					if(!flag[d]){
						flag[d] = 1;
						sum += team[3][d];
					}
					else
						continue;
					for(int e=0;e<20;e++){
						if(!flag[e]){
							flag[e] = 1;
							sum += team[4][e];
							if(sum>max)
								max = sum;
							sum -= team[4][e];
							flag[e]--;
						}
						else
							continue;
					}
					sum -= team[3][d];
					flag[d]--;
				}
				sum -= team[2][c];
				flag[c]--;
			}
			sum -= team[1][b];
			flag[b]--;
		}
		sum -= team[0][a];
		flag[a]--;
	}
	
	cout << max << endl;
	return 0;
}
