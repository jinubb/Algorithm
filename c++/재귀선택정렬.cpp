#include<stdio.h>
#define SIZE 10

int select_sort(int array[], int n){
	int max=0, temp; // 최대값 초기화 
	 
	if (n == 1){   // n이 1이면 탈출 
		return 0;
	}
	
 	for(int i = 1; i < n; i++)
  		if(array[max] < array[i]) { 
			max = i;  // 돌면서 최대값 저장 
		}
		
 	temp = array[max];
 	array[max] = array[n-1];
 	array[n-1] = temp;   // 최대값과 n-1주소에 저장된 배열값(마지막 인덱스) swap
 	
 	select_sort(array, n-1);  // n을 줄이면서 재귀 
}
int main(void){
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
	select_sort(list,SIZE);
	for(int i=0;i<SIZE;i++){
		printf("%d ",list[i]);
	}
	return 0;
}
