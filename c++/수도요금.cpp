#include<iostream>
using namespace std;
int min(int a, int b){
	if(a > b){
		return b;
	}
	else{
		return a;
	}
}
int main(void){
	int price_X;  // x사의 리터당 가격 
	int price_basic_Y;  // y사의 기본가격 
	int threshold_Y; // y사의 기본가격 기준 
	int price_extra_Y; // y사의 추가가격 
	int p; // 사용량 
	
	cin >> price_X >> price_basic_Y >> threshold_Y >> price_extra_Y >> p;
	
	int select_X;  // x사를 선택했을때의 가격 
	int select_Y;  // y사를 선택했을때의 가격 
	
	select_X = p*price_X;
	select_Y = price_basic_Y;
	if(p>threshold_Y){
		select_Y += price_extra_Y * (p-threshold_Y);
	}

	cout << min(select_X , select_Y);
	return 0;
}
