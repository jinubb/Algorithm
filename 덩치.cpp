#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int main(void){
	int num;
	cin >> num;
	
	pair<int, int> p[num];
	int array[num]= {0 };
	
	int temp1, temp2;
	
	for(int i=0;i<num;i++){
		cin >> temp1 >> temp2;
		p[i] = make_pair(temp1,temp2);
	}
	
	int cnt = num;
	int j=0;
	int rank = 1;
 	for(int i=0;i<num;i++){
 		while(cnt--){
 			if(i!=j){  // ���� ������� ���������� 
 				if(p[i].first < p[j].first){   // ���� ����� �����԰� �񱳴���� �����Ժ��� �۴ٸ� 
 					if(p[i].second < p[j].second){  // ���� ����� �����Կ� Ű �ΰ��� �񱳴�󺸴� ������� 
 					rank++; // ��ġ���� +1	
					}
					else if (p[i].second == p[j].second){  // ���� Ű�� ������ �����԰� �񱳴�󺸴� �۱⶧���� 
						rank++;  // ��ġ���� +1 
					} 
					else{  // �����Դ� �� ������ Ű�� �� ũ�⶧���� ���Ҽ� x 
//						continue;
					}
				}
				else if(p[i].first == p[j].first){  // ���� ���� �񱳴���� �����԰� ���� ��� 
					if(p[i].second < p[j].second){  // ���� ��󺸴� �񱳴���� Ű�� ū ��� 
 					rank++; // ��ġ���� +1	
					}
					else if (p[i].second == p[j].second){  // ������� �񱳴���� Ű�� �����԰� ��� ������� 
//						continue;
					} 
					else{  // ������� �񱳴���� Ű�� ������ �����԰� �� ���� ��� 
//						continue;
					} 
				}
				else{  // ���� �夷�� �����԰� �񱳴���� �����Ժ��� ũ�ٸ� 
//					continue;
				}
			}
			j++; // ���� �񱳴������ �̵� 
		}
		array[i]=rank;
		
		rank = 1;
		cnt = num;
	}
	
	for(int i=0;i<num;i++){
		cout << array[i] << " ";
	}
	
	return 0;
}
