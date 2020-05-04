#include<iostream>
using namespace std;
int main(void){
	int num=3;
	int array[num][4];
	int sol[num];
	int sum = 0;
	for(int i=0;i<num;i++){
		for(int j=0;j<4;j++){
			cin >> array[i][j];
			sum+=array[i][j];
		}
		if(sum == 0){
			sol[i] = 68;
		}
		else if(sum == 1){
			sol[i] = 67;
		}
		else if(sum == 2){
			sol[i] = 66;
		}
		else if(sum == 3){
			sol[i] = 65;
		}
		else{
			sol[i] = 69;
		}
		sum=0;
	}
	for(int i=0;i<num;i++){
		printf("%c\n",sol[i]);
	}
	return 0;
} 
