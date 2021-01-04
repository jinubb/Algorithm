#include <stdio.h>
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



int main(void){
    int n;
	scanf("%d",&n);
	int chu[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&chu[i]);
	}

	sort(chu, n); 
    int target = 1;

	for(int i = 0; i < n; i++){
		if(target < chu[i]){
			break;
		}
		target += chu[i];
	}

	printf("%d",target); 

	return 0;
}
