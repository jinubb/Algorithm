#include<iostream>
using namespace std;
unsigned long long memo[101];
unsigned long long dp(int n){
	memo[1]=1;
	memo[2]=1;
	memo[3]=1;
	memo[4]=2;
	memo[5]=2;
	memo[6]=3;
	memo[7]=4;
	memo[8]=5;
	memo[9]=7;
	memo[10]=9;
	for(int i=11;i<=n;i++){
		memo[i]=memo[i-1]+memo[i-5];
	}
	return memo[n];
}
int main(void){
	int num;
	cin >> num;
	int array[num];
	
	for(int i=0;i<num;i++){
		int temp;
		cin >> temp;
		cout << dp(temp) << endl;
	}
	
	return 0;
}
