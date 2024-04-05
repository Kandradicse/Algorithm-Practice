#include <bits/stdc++.h>

int DFS(int a,int b,int map[7][7]){
	int n = 0;
	int dx[5] = {1,0,-1,0};
	int dy[5] = {0,1,0,-1};

	
	if(a==0 || b==0 || a==6 || b==6){
		n++;
		return n;
	}
	
	for(int i=0;i<4;i++){
		int a2 = a + dx[i];
		int b2 = b + dy[i];
		
		if(map[a2][b2]==0){
			map[a2][b2] = 1;
			map[6-a2][6-b2] = 1;
			n += DFS(a2,b2,map);
			map[a2][b2] = 0;
			map[6-a2][6-b2] = 0;
		} 
	}
	return n;
}


int main(){
	int num = 0;
	int map[7][7] = {0};
	
	map[3][3] = 1;
	num = DFS(3,3,map);
	
	printf("%d",num/4);	
	return 0;
}
