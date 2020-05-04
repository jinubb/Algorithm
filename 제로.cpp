#include<iostream>
#include<stack>
using namespace std;
int main(void){
	int k;
	cin >> k;
	
	stack<int> st1;
	for(int i=0;i<k;i++){
		int temp;
		cin >> temp;
		if(temp == 0){
			st1.pop();
		}
		else{
			st1.push(temp);
		}
	}
	int sum=0;
	while(st1.size()!=0){
		sum+=st1.top();
		st1.pop();
	} 
	cout << sum << endl;
	return 0;
}
