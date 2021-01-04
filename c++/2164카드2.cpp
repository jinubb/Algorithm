#include<iostream>
#include<queue>
using namespace std;
int main(void){
	queue<int> q1;
	
	int num;
	
	cin >> num;
	int n= num;
	int cnt=1;
	while(n--){
		q1.push(cnt);
		cnt++;
	}
	
	int temp;
	for(int i=0;i<num-1;i++){
		q1.pop();
		temp = q1.front();
		q1.pop();
		q1.push(temp);
	}
	cout << q1.front() << endl;	
	
	return 0;
}
