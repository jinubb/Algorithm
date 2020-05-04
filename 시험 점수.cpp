#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(void){
	int a[4];
	int b[4];
	int sum_a=0;
	int sum_b=0;
	for(int i=0;i<4;i++){
		cin >> a[i];
		sum_a+=a[i];
	}
	for(int i=0;i<4;i++){
		cin >> b[i];
		sum_b+=b[i];
	}
	cout << max(sum_a,sum_b);
	
	return 0;
}
