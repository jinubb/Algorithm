#include<iostream>
#include<queue>
using namespace std;
int main(void){
	queue<int> q1;
	queue<int> q2;
	
	int num;
	int k;
	cin >> num >> k;
	
	int n = num;
	int cnt=1;
	while(n--){
		q1.push(cnt);
		cnt++;
	}
	
	int temp;
	for(int i=0;i<num;i++){
		for(int j=0;j<k-1;j++){
			temp = q1.front(); 
			q1.pop();
			q1.push(temp);
		}
		temp = q1.front();
		q2.push(temp);
		q1.pop();
	}
	
	cout << "<";
	while(q2.size()>1){
		temp = q2.front();
		q2.pop();
		cout << temp << ", ";
	}
	temp = q2.front();
	cout << temp <<">";
	
	return 0;
}
