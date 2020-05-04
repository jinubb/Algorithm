#include<iostream>
using namespace std;
int memo[1001][1001];
int max(int a,int b){
	if( a > b ){
		return a;
	}
	else{
		return b;
	}
}
int main(void){
	int n,m;
	cin >> n >> m;
	
	int array[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> array[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
				memo[i][j] = max(memo[i][j-1],memo[i-1][j]) + array[i][j];
		}
	}
	
	cout << memo[n][m];
	return 0;
}
