#include<iostream>
#include<utility>
#include<algorithm>
#include<queue>
using namespace std;
int memo[501];
int main(void){
	int num; // 동기의 숫자 
	int k; //리스트의 길이 
	cin >> num >> k;
	
	pair<int, int> p[k];
	int temp1, temp2;
	for(int i=0;i<k;i++){
		cin >> temp1 >> temp2;
		p[i]=make_pair(temp1,temp2);
	}
	
	sort(p,p+k);
	queue<int> q1;
	
	for(int i=0;i<k;i++){
		if(p[i].first == 1){
			memo[p[i].second] = 1;  // 1의친구 찾기 
		}
		if(p[i].second == 1){
			memo[p[i].first] = 1;  // 1의친구 찾기  
		}
	}
	
	for(int i=2;i<=num;i++){
		if(memo[i]==1){
			q1.push(i);  // 1의친구 push 
		}
	}
	
	int temp3;
	while(q1.size()!=0){
		temp3 = q1.front();
		q1.pop();
		for(int i=0;i<k;i++){
			if(p[i].first == temp3){
				memo[p[i].second]=1;  // 친구의 친구 찾기 
			}
			if(p[i].second == temp3){
				memo[p[i].first]=1;  // 친구의 친구 찾기 
			}
		}
	}
	
	
	int cnt=0;
	for(int i=2;i<=num;i++){
		if(memo[i]!=0){
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}
 
