#include<stdio.h>
int main(void){
	int N,X;
	scanf("%d %d",&N,&X);
	int array[N];
	int array2[N];
	int num=0; 
	for(int i=0;i<N;i++){
		scanf("%d",&array[i]);
		if(array[i]<X){
			array2[num++]=array[i];
		}
	}
	for(int i=0;i<num;i++){
		printf("%d ",array2[i]);
	}
	return 0;
}
