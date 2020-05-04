#include<iostream>
#include<deque>
using namespace std;
int main(void){
	deque<int> dq1;
	deque<int> dq2;
	
	int n,m;
	cin >> n >> m;
	
	int array[m];
	for(int i=0;i<m;i++){
		cin >> array[i];
	}
	
	for(int i=1;i<=n;i++){
		dq1.push_back(i);
		dq2.push_back(i);
	}
	int cnt1=0;
	int cnt2=0;
	int temp;
	int mode = 0;
	int sum = 0;
	for(int i=0;i<m;i++){
		while(dq1.front() != array[i]){
			temp = dq1.front();
			dq1.pop_front();
			dq1.push_back(temp);  // 왼쪽으로 한칸 이동 
			cnt1++;
		}
		dq1.pop_front();
		while(dq2.front() != array[i]){
			temp = dq2.back();
			dq2.pop_back();
			dq2.push_front(temp);  // 오른쪽으로 한칸 이동 
			cnt2++;
		}
		dq2.pop_front();
		
		if(cnt1 <= cnt2){
			sum+=cnt1;
			dq2 = dq1;
		}
		else{
			sum+=cnt2;
			dq1 = dq2;
		}
		
		
		cnt1=0;
		cnt2=0;
	}
	cout << sum;
	return 0;
}
