#include <bits/stdc++.h>

using namespace std;

int main(){
	int T,date,year,day,mon,ndate,temp,flag1,flag2,flag3;
	string N;
	
	cin >> T;
	flag1 = 0;
	flag2 = 0;
	flag3 = 0;
	
	while(T--){
		cin >> N;
		date  = stoi(N);
		year = stoi(N.substr(0,4));
		
		while(1){
			ndate = year;
			temp = year;
			for(int i=0;i<4;i++){
				ndate *= 10;
				ndate += (temp%10);
				temp /= 10;	
			}
			
			if(ndate>date){
				day = ndate%100;
				mon = (ndate/100)%100;
				if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12){
					if(day<=31 && day>=1){
						flag1 = ndate;
						if(year/100 == year%100)
							flag3 = flag1;
					}
				}
				else if(mon==4||mon==6||mon==9||mon==11){
					if(day<=30 && day>=1){
						flag1 = ndate;
						if(year/100 == year%100)
							flag3 = flag1;
					}
				}
				else if(mon==2&&year%4==0&&year%100!=0){
					if(day<=29&&day>=1){
						flag1 = ndate;
						if(year/100 == year%100)
							flag3 = flag1;
					}
				}
				else if(mon==2&&(year%4!=0||year%100==0)){
					if(day<=28&&day>=1){
						flag1 = ndate;
						if(year/100 == year%100)
							flag3 = flag1;
					}
						
				}
				
				if(flag1>0&&flag2==0){
					flag2 = flag1;
				}
				
				if(flag3&&flag2){
					cout << flag2 <<endl;
					cout << flag3 <<endl;
					flag1 = 0;
					flag2 = 0;
					flag3 = 0;
					break;
				}
			}
			year++;
			
		}
		
		 
	}
	
	return 0;
}
