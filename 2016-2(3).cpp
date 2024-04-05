#include <bits/stdc++.h>

using namespace std;

void DFS(int x,int y,int map[3][4]);
bool check(int map[3][4]);

int flag[3][4];
int ans = 0;
set <int> S1;
set <set <int> > S2;
int dx2[8] = {1,1,1,0,0,-1,-1,-1};
int dy2[8] = {-1,0,1,-1,1,-1,0,1};
int num[10];
int temp = 0;

int main(){
	int map[3][4];
	memset(map,-1,sizeof(map));
	memset(flag,0,sizeof(flag));
	memset(num,0,sizeof(num));
	
	flag[0][0] = 1;
	flag[2][3] = 1;
	flag[0][1] = 1;
	DFS(0,1,map);
	
	ans = S2.size();
	cout << ans <<endl;
	return 0;
}

void DFS(int x,int y,int map[3][4]){
	if(x==2 && y==3 && check(map)){
		for(int i=0;i<3;i++){
			for(int j=0;j<4;j++){
				if((i!=0 || j!=0) || (i!=2 || j!=3)){
					S1.insert(map[i][j]);					
				}
			}
		}
		S2.insert(S1);
		S1.clear(); 
		return;
	}
	
	
	for(int m=0;m<10;m++){
		if(num[m] != 1){
			map[x][y] = m;
			num[m]= 1;
			temp = m;
			
			for(int nx=0;nx<3;nx++){
				for(int ny=0;ny<4;ny++){
					if(((nx!=0 || ny!=0) || (nx!=2 || ny!=3)) && flag[nx][ny]==0){
						flag[nx][ny] = 1;
						DFS(nx,ny,map);
						map[nx][ny] = -1;
						flag[nx][ny] = 0;
						num[temp] = 0;
					}
				}
			}
		}		
	}
		
}



bool check(int map[3][4]){
	int x2,y2;
	for(int m=0;m<10;m++){
		if(num[m]==0)
			return false;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			for(int k=0;k<8;k++){
				x2 = i + dx2[k];
				y2 = j + dy2[k];
				if(x2>2 || x2<0 || y2>3 || y2<0 || (x2==0&&y2==0) || (x2==2&&y2==3)){
					if(map[i][j]+1==map[x2][y2] || map[i][j]-1==map[x2][y2]){
						return false;
					}
				}
			}
		}
	}
	return true;
}
