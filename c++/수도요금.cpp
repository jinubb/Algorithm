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
	int price_X;  // x���� ���ʹ� ���� 
	int price_basic_Y;  // y���� �⺻���� 
	int threshold_Y; // y���� �⺻���� ���� 
	int price_extra_Y; // y���� �߰����� 
	int p; // ��뷮 
	
	cin >> price_X >> price_basic_Y >> threshold_Y >> price_extra_Y >> p;
	
	int select_X;  // x�縦 ������������ ���� 
	int select_Y;  // y�縦 ������������ ���� 
	
	select_X = p*price_X;
	select_Y = price_basic_Y;
	if(p>threshold_Y){
		select_Y += price_extra_Y * (p-threshold_Y);
	}

	cout << min(select_X , select_Y);
	return 0;
}
