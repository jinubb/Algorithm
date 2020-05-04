#include<iostream>
using namespace std;
int memo[1001]; 
int mode;
int min(int a,int b,int c){
	if(a > b){
		if(c > b){
			mode = 2;
			return b;
		}
		else{
			mode = 3;
			return c;
		}
	}
	else{
		if(c > a){
			mode = 1;
			return a;
		}
		else{
			mode = 3;
			return c;
		}
	}
}
int main(void){
	int n;
	cin >> n;
	int array[n+1][4];
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=3;j++){
			cin >> array[i][j];
		}
	}
	
	memo[1] = min(array[1][1],array[1][2],array[1][3]);
	if(mode == 1){
		memo[2] = min(memo[1]+array[2][2],memo[1]+array[2][3],1001);
	}
	else if(mode == 2){
		memo[2] = min(memo[1]+array[2][1],memo[1]+array[2][3],1001);
	}
	else{
		memo[2] = min(memo[1]+array[2][2],memo[1]+array[2][1],1001);
	}
	
	for(int i=3;i<=n;i++){
		memo[i] = memo[i-2]
	}
	
	return 0;
}
