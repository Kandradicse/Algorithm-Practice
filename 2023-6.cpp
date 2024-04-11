#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,ans,flag,h,t,temp;
	cin >> k;
	string s,ss;
	cin >> s;
	char a,b;
	cin >> a >> b;
	
	vector<int> head,tail;
	flag = 1;
	h = s.find(a);
	temp = h;
	head.push_back(h);
	ss = s.substr(h+1,s.size()-h);
	while(flag){
		if(ss.find(a) != string::npos){
			h = ss.find(a);
			temp = temp + 1 + h;
			head.push_back(temp);
			ss = ss.substr(h+1,ss.size()-h);
		}
		else
			flag = 0;		
	}
	
	flag = 1;
	t = s.find(b);
	temp = t;
	tail.push_back(t);
	ss = s.substr(t+1,s.size()-t);
	while(flag){
		if(ss.find(b) != string::npos){
			t = ss.find(b);
			temp = temp + 1 + t;
			tail.push_back(temp);
			ss = ss.substr(t+1,ss.size()-t);
		}
		else
			flag = 0;		
	}
	
	for(int i=0;i<head.size();i++){
		for(int j=0;j<tail.size();j++){
			if(tail[j]-head[i]+1>=k)
				ans++;
		} 
	}
	
	cout << ans << endl;
	return 0;
} 
