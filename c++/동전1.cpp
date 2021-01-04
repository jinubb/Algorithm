#include<stdio.h>
#include<limits.h>

int array[101];
int memo[101];
int mode=0;;

void sort(int num){
	int temp, min=INT_MAX, temp_array, i, j;
	
	for(i=1;i<=num;i++){
		for(j=i;j<=num;j++){
			if(array[j]<min){
				min = array[j];
				temp_array = j;
			}
		}t
		temp = array[i];
		array[i] = min;
		array[temp_array] = temp;
		min = INT_MAX;
	}
}

int dp(int num,int val){
	int temp;
	if(mode == 0){
		for(int i=1;i<=num;i++){
			if(val % array[i] == 0){
				temp = array[i];
				array[i] = min;
				array[temp_array] = temp;
				memo[1] = 1;
				break;
			}
		}
	
	}
} 
int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	int i;
	for(i=1;i<=n;i++){
		scanf("%d",&array[i]);
	}

	sort(n);
	
	dp(n,k);
	for(i=1;i<=n;i++){
		printf("%d ",array[i]);
	}	
	return 0;
}
