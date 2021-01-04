#include<iostream>
using namespace std;
int memo[10001][2];
int dp(int num,int array[]){
	memo[1][0]=0;
	memo[1][1]=array[1];
	memo[2][0]=array[1];
	memo[2][1]=array[1]+array[2];
	
	for(int i=3;i<=num;i++){
		memo[i][0]=max(memo[i-1][1],memo[i-1][0]);
		memo[i][1]=max(memo[i-2][1],array[i-1]+memo[i-2][0])+array[i];
	}
//	cout << memo[4][1] <<endl;
	return max(memo[num][0],memo[num][1]);
}
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(void){
	int n;
	cin >> n;
	int array[n+1];
	for(int i=1;i<=n;i++){
		cin >> array[i];
	}
	cout << dp(n,array);
	return 0;
}
