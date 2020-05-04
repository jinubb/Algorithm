#include<iostream>
#include<utility>
#include<queue>
using namespace std;
int main(void){
	int num;
	int k;
	cin >> num >> k; 
	int array[num+1][num+1] = {0,};
	int cnt=0;
	int temp1, temp2;
	
	for(int i=0;i<k;i++){
		cin >> temp1 >> temp2;
		array[temp1][temp2] = 1;
		array[temp2][temp1] = 1;
	}
	queue<int> q;
	for(int i=2;i<=num;i++){
		if(array[1][i]==1){
			cnt++;
			q.push(i);
			cout << i << endl;
		}
	}
	/*
	int temp;
	while(q.size()!=0){
		temp = q.back();
		q.pop();
		for(int i=2;i<=num;i++){
			if(array[temp][i]==1){
				cout << "push" << endl;
				cout << temp << i << endl;
				cnt++;
			}
		}
	}	
	
	cout << cnt;
	*/
	cout << q.front() << endl;
	q.pop();
	cout << q.front();
	return 0;
} 
