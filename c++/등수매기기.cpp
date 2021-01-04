#include<iostream>
#include<algorithm>
using namespace std;

unsigned long long sum=0;

void func(int a,int b){  // 각 등수별 불만도를 더하는 함수 
	if(a-b>0){
		sum+=(a-b);
	}
	else{
		sum+=(b-a);
	}
}
int main(void){
	int num;
	scanf("%d",&num);
	int array[num];
	for(int i=0;i<num;i++){
		scanf("%d",&array[i]);
	}
	
	sort(array,array+num);
	
	int temp=1;  // 불만도 계산을 위한 변수 
	for(int i=0;i<num;i++){
		func(temp,array[i]);
		temp++;
	}
	
	cout << sum;
	return 0;
}
