#include<iostream>
using namespace std;
int memo[1000001];
int dp(int n){
	memo[1] = 1;
	memo[2] = 2;
//	memo[3] = 2; 
	for(int i=3;i<=n;i++){
		memo[i]=(memo[i-2]+memo[i-1])%15746;
	}
	return memo[n];
}
int main(void){
	int num;
	cin >> num;
	cout << dp(num) <<endl;
	return 0;
}
