#include<iostream>
using namespace std;
int main(void){
	int a,b,c,d;
	cin >> a >> b>> c>> d;
	int sum = a+b+c+d;
	int m = sum/60;
	int sec = sum%60;
	cout << m << endl;
	cout << sec;
	return 0;
}
