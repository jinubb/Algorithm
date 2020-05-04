#include<iostream>
using namespace std;
int change_date(int x, int y){  // 1월 1일과의 날짜차이를 알려주는 함수 
	int sum=0;
	while(x>1){
		if(x==3){
			sum+=28;
		}
		else if(x==2||x==4||x==6||x==8||x==9||x==11||x==13){
			sum+=31;
		}
		else{
			sum+=30;
		}
		x--;
	}
	while(y>1){
		y--;
		sum++;
	}
	return sum;
}
int main(void){
	int month, date;
	cin >> month >> date;
	int k = change_date(month,date)%7;
	if(k==0) cout << "MON";
	else if(k==1) cout << "TUE";
	else if(k==2) cout << "WED";
	else if(k==3) cout << "THU";
	else if(k==4) cout << "FRI";
	else if(k==5) cout << "SAT";
	else if(k==6) cout << "SUN";
	
//	cout << k;
	return 0;
}
