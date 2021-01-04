#include<stdio.h>
#include<limits.h>
int main(void){
	int array[9];
	int max=INT_MIN;
	int temp;
	for(int i=0;i<9;i++){
		scanf("%d",&array[i]);
	}
	for(int i=0;i<9;i++){
		if(array[i]>max){
			max=array[i];
			temp = i;
		}
	}
	printf("%d\n%d",max,temp+1);
	return 0;
} 
