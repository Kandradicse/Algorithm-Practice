#include <bits/stdc++.h>

using namespace std;

int main(){
	set<int> ans;
	set<set<int> > all;
	
	int k;
	string s;
	for(int i=1;i<2019;i++){
		for(int j=i+1;j<2019;j++){
			k = 2019-i-j;
			if(k>0){
				if(k!=i&&i!=j&&k!=j){
					s = to_string(i);
					if(count(s.begin(),s.end(),'2')||count(s.begin(),s.end(),'4'))
						continue;
					s = to_string(j);
					if(count(s.begin(),s.end(),'2')||count(s.begin(),s.end(),'4'))
						continue;
					s = to_string(k);
					if(count(s.begin(),s.end(),'2')||count(s.begin(),s.end(),'4'))
						continue;
					ans.insert(i);
					ans.insert(j);
					ans.insert(k);
					all.insert(ans);
					ans.clear();	
				}
				
			}
		}
	}
	
	cout << all.size();
	return 0;
}
