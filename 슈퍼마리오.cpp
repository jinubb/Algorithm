#include<iostream>
using namespace std;
int differ_100(int n){
	if(n>100){
		return n-100;
	}
	else{
		return 100-n;
	}
}
int min(int a,int b){
	if(a>b){
		return b;
	}
	else{
		return a;
	}
}
int memo[10];
int main(void){
	int a[10];
	for(int i=0;i<10;i++){
		cin >> a[i];
	}
	memo[0] = a[0];
	for(int i=1;i<10;i++){
		memo[i] = memo[i-1]+a[i];
	}
	int mode=0;
	if(memo[0] > 100){
		mode = 1;
	}

	int min = 101;
	int temp_array;
	for(int i=0;i<10;i++){
		if(differ_100(memo[i])<=min){
			min = differ_100(memo[i]);
			temp_array = memo[i];
		}
	}
	
	if(mode==0){
		cout << temp_array;
	}
	else{
		cout << "0";
	}
	return 0;
} 
