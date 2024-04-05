#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 2019;
	int fir = n%26;
	int sec = (n/26)%26;
	int thi = (n/26/26)%26;
	
	char f,s,t;
	
	if(fir)
		f = 'A'+fir-1;
	else
		f = 'Z';
		
	if(sec)
		s = 'A'+sec-1;
	else
		s = 'Z';
	
	if(thi)
		t = 'A'+thi-1;
	else
		t = 'Z';
	
	cout<< t << s << f <<endl;
	return 0;
}
