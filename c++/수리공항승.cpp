#include<stdio.h>
#include<limits.h> 
void sort(int array[],int n){
	int temp, max, temp_array;
	int i, j;
	max = INT_MAX;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(max>array[j]){
				max = array[j];
				temp_array = j;
			}
		}
		temp = array[i];
		array[i]=array[temp_array];
		array[temp_array]=temp;
		max = INT_MAX;
	}
}
int main(void)
{
	int N, L;
	scanf("%d %d",&N,&L);
	int array[N];
	int i=0;
	for(i=0;i<N;i++){
		scanf("%d",&array[i]);
	}
	sort(array,N);
	int sol=N;
	int temp=0;
	for(i=0;i<N-1;i++){
		if((array[i+1]-array[i])+temp<L){
			//printf("sol--");
			sol--;
			temp += array[i+1]-array[i];
		}
		else{
			temp=0;
		}
		
	}
	printf("%d",sol);
	return 0;
}
