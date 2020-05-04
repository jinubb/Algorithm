#include<stdio.h>
#define SIZE 10

int select_sort(int array[], int n){
	int max=0, temp; // �ִ밪 �ʱ�ȭ 
	 
	if (n == 1){   // n�� 1�̸� Ż�� 
		return 0;
	}
	
 	for(int i = 1; i < n; i++)
  		if(array[max] < array[i]) { 
			max = i;  // ���鼭 �ִ밪 ���� 
		}
		
 	temp = array[max];
 	array[max] = array[n-1];
 	array[n-1] = temp;   // �ִ밪�� n-1�ּҿ� ����� �迭��(������ �ε���) swap
 	
 	select_sort(array, n-1);  // n�� ���̸鼭 ��� 
}
int main(void){
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
	select_sort(list,SIZE);
	for(int i=0;i<SIZE;i++){
		printf("%d ",list[i]);
	}
	return 0;
}
