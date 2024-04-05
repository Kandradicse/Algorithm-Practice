#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > mmap(3,vector<int>(4,-1));
int flag[3][4];
int num = 0;
int x,y;
int dx[8] = {1,0,-1,0,1,1,-1,-1};
int dy[8] = {0,1,0,-1,1,-1,1,-1};
set<vector<vector<int> > > S;

void find(int step,int x,int y);

int main(){
	memset(flag,-1,sizeof(flag));
	
	find(0,0,1); 
	num<<S.size();
	
	printf("%d",num);
	return 0;
}

void find(int step,int x,int y){
	int newx,newy;
	
	if(step==8){
		S.insert(mmap);
		return;
	}
	
	for(int )
	
	for(int i=0;i<8;i++){
		newx = x + dx[i];
		newy = y + dy[i];
		if(newx>=0 && newy>=0 && newx<=2 && newy<=3 && (newx!=0 && newy!=0) && (newx!=2 && newy!=3)){
			flag[newx][newy] = a;
		}
		for(int x2=0;x2<3;x2++){
			for(int y2=0;y2<4;y2++){
				if(flag[x2][y2]!=a && (x2!=0 && y2!=0) && (x2!=2 && y2!=3) && mmap[x2][y2]==-1){
					for(int m=0;m<10;m++){
						if(m==a)
							continue;
						mmap[x2][y2] = m;
						step++;
						find(step+1,m,x2,y2);
						mmap[x2][y2] = -1;
					} 
				}
			}
		}
		memset(flag,-1,sizeof(flag));
	}
}
