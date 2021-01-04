#include<iostream>
using namespace std;
int main(void){
	int n;
	cin >> n;
	
	int cnt = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i*j <= n){
				cnt++;
				if(i==j){
					cnt++;
				}
			}
		}
	}
	cout << cnt/2 << endl;
	return 0;
} 
