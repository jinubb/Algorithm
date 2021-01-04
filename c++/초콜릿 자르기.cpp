#include<iostream>
using namespace std;
int memo[301][301];
int main(void){
	int n, m;
	cin >> n >> m;
	
	memo[1][1] = 0;
	memo[2][1] = 1;
	memo[1][2] = 1;
	
	memo[3][1] = 2; 
	for(int i=2;i<=n;i++){
		for(int j=2;j<=m;j++){
			if(j %2 ==0){
				memo[i][j] = memo[i][j/2] + memo[i][j/2];
			}
			else{
				memo[i][j] = memo[i][(j/2)+1] + memo[i][j/2];
			}
		}
	}
	cout << memo[n][m];
	return 0;
}
