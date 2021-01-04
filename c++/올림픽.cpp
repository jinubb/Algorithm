#include<iostream>
using namespace std;
int main(void){
	int n, k;
	cin >> n >> k;
	int array[n][4];
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			cin >> array[i][j];
			if(array[i][0] == k){
				temp = i;
			}
		}
	}
	
	int temp1 = array[0][0];
	int temp2 = array[0][1];
	int temp3 = array[0][2];
	int temp4 = array[0][3];
	
	array[0][0] = array[temp][0];
	array[temp][0] = temp1;
	array[0][1] = array[temp][1];
	array[temp][1] = temp2;
	array[0][2] = array[temp][2];
	array[temp][2] = temp3;
	array[0][3] = array[temp][3];
	array[temp][3] = temp4;   // k번째 국가와 첫번째 국가 스왑 
	
	int score = 1;
	for(int i=1;i<4;i++){
		for(int j=1;j<n;j++){
			if(array[0][i] < array[j][i]){
				score++;  // k번째 국가보다 금메달이 더 많기때문에 등수+1 
				for(int k=1;k<4;k++){
					array[j][k] = 0; // 금은동메달 초기화 
				}
			}
			else if(array[0][i] > array[j][i]){
				for(int k=1;k<4;k++){
					array[j][k] = 0; // 금은동메달 초기화 
				}
			} 
		}
	}
	
/*	
	cout << endl;
	cout << endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout << array[i][j];
		}
		cout << endl;
	}
*/
	cout << score;
	
	return 0;
} 
