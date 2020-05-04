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
 			if(i!=j){  // 같은 사람과는 비교하지않음 
 				if(p[i].first < p[j].first){   // 현재 대상의 몸무게가 비교대상의 몸무게보다 작다면 
 					if(p[i].second < p[j].second){  // 현재 대상의 몸무게와 키 두개다 비교대상보다 작은경우 
 					rank++; // 덩치순위 +1	
					}
					else if (p[i].second == p[j].second){  // 현재 키는 같지만 몸무게가 비교대상보다 작기때문에 
						rank++;  // 덩치순위 +1 
					} 
					else{  // 몸무게는 더 작지만 키는 더 크기때문에 비교할수 x 
//						continue;
					}
				}
				else if(p[i].first == p[j].first){  // 현재 대상과 비교대상의 몸무게가 같은 경우 
					if(p[i].second < p[j].second){  // 현재 대상보다 비교대상의 키가 큰 경우 
 					rank++; // 덩치순위 +1	
					}
					else if (p[i].second == p[j].second){  // 현재대상과 비교대상의 키와 몸무게가 모두 같은경우 
//						continue;
					} 
					else{  // 현재대상과 비교대상의 키는 같지만 몸무게가 더 많은 경우 
//						continue;
					} 
				}
				else{  // 현재 닷ㅇ의 몸무게가 비교대상의 몸무게보다 크다면 
//					continue;
				}
			}
			j++; // 다음 비교대상으로 이동 
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
