#include<iostream>
using namespace std;
int memo[1001][2];
int main(void){
	int num;
	cin >> num;
	
	int array[num+1]={0 };
	for(int i=1;i<=num;i++){
		cin >> array[i];
	}
	
	memo[1][0] = array[1];
	memo[1][1] = 1;
	
	for(int i=2;i<=num;i++){
		for(int j=1;j<=i;j++){
			memo[i][1] = max()
		}
	}
	
	
	
	return 0;
}
