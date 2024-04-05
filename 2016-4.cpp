#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	vector<int> f;
	set<vector <int> > s;
	
	while(cin >> n){
		for(int i=pow(n,0.5);i>=0;i--){
			for(int j=n-i*i;j>=0;j--){
				for(int k=n-i*i-j*j;k>=0;k--){
					for(int l=n-i*i-j*j-k*k;l>=0;l--){
						if(n==(i*i+j*j+k*k+l*l)){
							f.push_back(i);
							f.push_back(j);
							f.push_back(k);
							f.push_back(l);
							
							for(int a=0;a<4;a++){
								for(int b=a;b<4;b++){
									if(f[a]>f[b])
										swap(f[a],f[b]);
								}
							}
							s.insert(f);
							f.clear();
						}
					}
				}
			}
		}
		f = *s.begin();
		for(int m=0;m<4;m++){
			cout << f[m] << ' ';
		}
		cout << endl;
		f.clear();
		s.clear();
	}
	return 0;
}
