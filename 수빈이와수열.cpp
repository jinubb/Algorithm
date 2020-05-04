#include<iostream>
#include<vector>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int temp;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> temp;
		v.push_back(temp);
	}
	
	vector<int> sol;
	int k=0;
	temp = 0;
	
	for(int i=0;i<n;i++){
		temp = v[i];
		temp*=(i+1);
		for(int j=n-i;j<n;j++){
			temp -= sol[k];
			k++;
		}
		sol.push_back(temp); 
		k = 0;
		temp = 0;
	}

	for(int i=0;i<n;i++){
		cout << sol[i] << " ";
	}
	
	return 0;
}
