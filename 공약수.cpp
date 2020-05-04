#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int main(void){
	int n;
	cin >> n;
	vector<int> v1;
	if(n == 2){
		int a[2];
		cin >> a[0] >> a[1];
		sort(a,a+2);
		for(int i=1;i<=a[0];i++){
			if(a[0]%i==0){
				if(a[1]%i == 0){
					v1.push_back(i);
				}
			}
		}
	}
	else{
		int a[3];
		cin >>a[0] >>a[1] >>a[2];
		sort(a,a+3);
		for(int i=1;i<=a[0];i++){
			if(a[0]%i==0){
				if(a[1]%i == 0){
					if(a[2]%i == 0){
						v1.push_back(i);
					}
				}
			}
		}
	}
	vector<int> v2;
	int num = v1.size();
	for(int i=0;i<num;i++){
		int temp = v1.back();
		v2.push_back(temp);
		v1.pop_back();
	}
	for(int i=0;i<num;i++){
		cout << v2.back() << endl;
		v2.pop_back();
	}
	return 0;
} 


