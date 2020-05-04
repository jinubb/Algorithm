#include<iostream>
using namespace std;
int main(void){
	int n, k;
	cin >> n >> k;
	int array[n+1];
	array[0]=0;
	array[1]=0;
	for(int i=2;i<=n;i++){
		array[i]=i;
	}
	int p;
	int cnt = 0;
	int cnt2 = 0;
 	int mode = 0;
	int sol = 0; 
	int temp;
 	while(mode==0){
  		for(int i=2;i<=n;i++){
  			if(mode!=1){
   			if(array[i]!=0){  // 지우지 않은 수중 가장 작은 수 
    			p = i;
 /*   			cnt2++;
    			if(cnt2 == k){  // 이번에 삭제할 값이 k번째라면 
     				mode = 1;
     				sol = temp;
     				break;
    			}
    			cout << cnt2 << "번째 지워진 수는"  << array[i] << "입니다"<<endl;
    			array[i] = 0;  // p값 지우기 
*/
    			for(int j=1;(p*j)<=n;j++){
    				if(array[p*j]!=0){
     					cnt2++;
     					if(cnt2 == k){
      						mode = 1;
      						sol = array[p*j];
//      						cout << "k번째 지워진 수는"  << array[p*j] << "입니다"<<endl;
      						break;
     					}
//     					cout << p*j << endl;
//     					cout << cnt2 << "번째 지워진 수는"  << array[p*j] << "입니다"<<endl;
     					array[p*j]=0;  // p의 배수 지우기 
     				}
    			}
   			}
   			}
   			else{
   				break;
			}
   			/*
   			else{
    			cnt++;
   			}
   			if(cnt == n-1){  // 끝가지 돌았을 경우 
   				
    			mode = 1;
   			}
   			*/
  		}
//  		cnt = 0;
 	}
 	cout << sol;
 	return 0;
}  
