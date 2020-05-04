#include<iostream>
#include<utility>
#include<algorithm>
#include<queue>
using namespace std;
int memo[501];
int main(void){
	int num; // ������ ���� 
	int k; //����Ʈ�� ���� 
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
			memo[p[i].second] = 1;  // 1��ģ�� ã�� 
		}
		if(p[i].second == 1){
			memo[p[i].first] = 1;  // 1��ģ�� ã��  
		}
	}
	
	for(int i=2;i<=num;i++){
		if(memo[i]==1){
			q1.push(i);  // 1��ģ�� push 
		}
	}
	
	int temp3;
	while(q1.size()!=0){
		temp3 = q1.front();
		q1.pop();
		for(int i=0;i<k;i++){
			if(p[i].first == temp3){
				memo[p[i].second]=1;  // ģ���� ģ�� ã�� 
			}
			if(p[i].second == temp3){
				memo[p[i].first]=1;  // ģ���� ģ�� ã�� 
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
 
