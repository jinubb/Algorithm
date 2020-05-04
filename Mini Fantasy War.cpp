#include<iostream>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int array[n][8];
	for(int i=0;i<n;i++){
		for(int j=0;j<8;j++){
			cin >> array[i][j];
		}
		array[i][0] += array[i][4];
		array[i][1] += array[i][5];
		array[i][2] += array[i][6];
		array[i][3] += array[i][7];
		if(array[i][0] < 1){
			array[i][0] = 1;
		}
		if(array[i][1] < 1){
			array[i][1] = 1;
		}
		if(array[i][2] < 0){
			array[i][2] = 0;
		}
		cout << array[i][0] + (5*array[i][1]) + (2*array[i][2])+ (2*array[i][3]) << endl;
	}
	return 0;
}
