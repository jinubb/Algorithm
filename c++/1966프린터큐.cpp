#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int main(void){
//	pair<int, int> q1;
	queue<int> q1;
	queue<int> q2;
	queue<int> q3;
	
	int test_case;
	cin >> test_case;
	int temp = 0;
	for(int i=0;i<test_case;i++){
		int n,m;
		cin >> n >> m;
		
		for(int j=0;j<n;j++){
			q1.push(j+1); // q1�� 1���� n���� push 
			cin >> temp;
			q2.push(temp);  // q2�� �켱���� push 
		}
		int max;

		
		int mode = 0;
		int mode2 = 0;
		int temp1;
		int temp2;
		int cnt=0;
		int cnt2=n; 
		while(mode==0){
			
			
			if(q1.front() == m){ // ���� �������� ���� Ÿ���̶�� 
				q3=q2;  // q2�� ���� queue ���� 
				max = q3.front();
				while(q3.size()!=0){
					q3.pop();
					if(q3.front() > max){
						while(q3.size()!=0){
							q3.pop();
						}
						mode2 = 1;  // �ڿ� �� ū �켱������ ����. 
						break;
					}	
				}
				if(mode2 == 0){
					cout << cnt << endl;
					break;
				}
			}
			
			else{ // ���� �������� ���� Ÿ���� �ƴ϶�� 
				q3=q2;  // q2�� ���� queue ���� 
				max = q3.front();
				while(q3.size()!=0){
					q3.pop();
					if(q3.front() > max){
						while(q3.size()!=0){
							q3.pop();
						}
						mode2 = 1;  // �ڿ� �� ū �켱������ ����. 
						break;
					}	
					if(mode2 == 1) {
						break;
					}
				}
				
			}
			temp2 = q2.front();
			q2.pop();
			q2.push(temp2);
			
			temp1 = q1.front();
			q1.pop();
			q1.push(temp1);
			
			
			cnt++;  // Ƚ������
			cnt2 = n;
			mode2 = 0;
			
//			cout << "������"<< q3.size() << q2.size() << q1.size()<<endl;
			
			
		}



		while(q1.size() != 0 ){
			q1.pop();
		}
		while(q2.size() != 0 ){
			q2.pop();
		}
		while(q3.size() != 0 ){
			q3.pop();
		}
		
		
	}
	
	return 0;
}
