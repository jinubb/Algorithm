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
   			if(array[i]!=0){  // ������ ���� ���� ���� ���� �� 
    			p = i;
 /*   			cnt2++;
    			if(cnt2 == k){  // �̹��� ������ ���� k��°��� 
     				mode = 1;
     				sol = temp;
     				break;
    			}
    			cout << cnt2 << "��° ������ ����"  << array[i] << "�Դϴ�"<<endl;
    			array[i] = 0;  // p�� ����� 
*/
    			for(int j=1;(p*j)<=n;j++){
    				if(array[p*j]!=0){
     					cnt2++;
     					if(cnt2 == k){
      						mode = 1;
      						sol = array[p*j];
//      						cout << "k��° ������ ����"  << array[p*j] << "�Դϴ�"<<endl;
      						break;
     					}
//     					cout << p*j << endl;
//     					cout << cnt2 << "��° ������ ����"  << array[p*j] << "�Դϴ�"<<endl;
     					array[p*j]=0;  // p�� ��� ����� 
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
   			if(cnt == n-1){  // ������ ������ ��� 
   				
    			mode = 1;
   			}
   			*/
  		}
//  		cnt = 0;
 	}
 	cout << sol;
 	return 0;
}  
