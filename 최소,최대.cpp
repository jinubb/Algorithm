#include<stdio.h>
#include<limits.h>
int main(void){
	int N;
	scanf("%d",&N);
	int array[N];
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=0;i<N;i++){
		scanf("%d",&array[i]);
		if(array[i]<min){
			min = array[i];
		}
		if(array[i]>max){
			max = array[i];
		}
	}
	printf("%d %d",min,max);
	return 0;
}
