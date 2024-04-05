#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n = 2021041820210418;
	vector<long long> fac;
	set<long long> sch;
	set<set<long long> > sto;
	long long one,two;
	one = 0;
	two = 0;
	

	for(long long i=1;i*i<=n;i++){
		if(n%i==0){
			fac.push_back(i);
			fac.push_back(n/i);
		}
	}
	
	for(int a=0;a<fac.size();a++){
		for(int b=a;b<fac.size();b++){
			for(int c=b;c<fac.size();c++){
				if(fac[a]*fac[b]*fac[c]==n){
					sch.insert(fac[a]);
					sch.insert(fac[b]);
					sch.insert(fac[c]);
					sto.insert(sch);
					if(sch.size()==1)
						one++;
					if(sch.size()==2)
						two++;
					sch.clear();
				}
			}
		}
	}

	cout << one + two*3 + (sto.size()-one-two)*6 <<endl; 
		
	return 0;
} 


