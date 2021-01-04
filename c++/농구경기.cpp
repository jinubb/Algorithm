#include<iostream>
#include<cstring>
using namespace std;
int a[200];
int main(void){
	int n;
	cin >> n;
	
	char array[n][31];
	for(int i=0;i<n;i++){
		cin >> array[i];
		a[array[i][0]]++;
	}
	int cnt=0;
	for(int i=0;i<200;i++){
		if(a[i] >= 5){
			printf("%c",i);
			cnt++;
		}
//		cout << a[i];
	}
	if(cnt == 0){
		cout << "PREDAJA";
	}
	
	return 0;
}
