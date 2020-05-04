#include<iostream>
using namespace std;
int main(void){
	double num;
	double price;
	cin >> price >> num;
	double min = price*1000;
	min/=num;
	int n;
	cin >> n;
	
	double temp_num;
	double temp_price;
	double temp_min;
	for(int i=0;i<n;i++){
		cin >> temp_price >> temp_num;
		temp_min=temp_price * 1000;
		temp_min/=temp_num;
		if(temp_min < min){
			min = temp_min;
		}
	}
	cout << min << endl;
	return 0;
} 
