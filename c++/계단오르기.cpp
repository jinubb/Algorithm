#include<iostream>
using namespace std;
int memo[301][2];
int max(int a,int b){
	if(a > b){
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
	
	memo[1][0]=array[1];  // 전 계단을 선택하지 않는 경우 
	memo[1][1]=array[1];  // 전 계단을 선택하는 경우 
	memo[2][0]=array[2];
	memo[2][1]=array[1]+array[2];
	memo[3][0]=array[1]+array[3];
	memo[3][1]=array[2]+array[3];
	memo[4][0]=array[1]+array[2]+array[4];
	memo[4][1]=array[1]+array[3]+array[4];
	
	for(int i=5;i<=n;i++){
		memo[i][0]=max(memo[i-2][0],memo[i-2][1])+array[i];
		memo[i][1]=max(memo[i-3][1]+array[i-1]+array[i],memo[i-3][0]+array[i-1]+array[i]); 
	}
	cout << max(memo[n][1] , memo[n][0]) <<endl;
	
	return 0;
} 
