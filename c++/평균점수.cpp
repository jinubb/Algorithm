#include<iostream>
using namespace std;
int average(int array[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=array[i];
	}
	return sum/n;
}
int main(void){
	int num =5;
	int array[5];
	for(int i=0;i<5;i++){
		cin >> array[i];
		if(array[i]<40){
			array[i] = 40;
		}
	}
	
	cout << average(array,num);
	
	return 0;
}
