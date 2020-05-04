#include<iostream>
using namespace std;
int main(void){
	int x,i,k=0;
	cin >> x;
	for(i=64;i>0;i/=2){
		if(!x)
			break;
		if(i <= x){
			k++;
			x = x-i;
		}
	}
	cout << k;
	return 0;
}
