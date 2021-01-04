#include<stdio.h>
int num;
void sort(int array[]){
	int i,j;
	int temp,temp_index,min=1001;
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(array[j]<min){
				temp_index = j;
				min = array[j];
			}
		}
		temp = array[i];
		array[i] = min;
		array[temp_index] = temp;
		min=1001; 
	}
}

int main(void)
{
	scanf("%d",&num);
	int time[num];
	int i,j;
	for(i=0;i<num;i++){
		scanf("%d",&time[i]);
	}
	
	sort(time);
	
	int sum=0;
	
	for(i=0;i<num;i++){
		for(j=0;j<num-i;j++){
			sum+=time[j];
		}
	}
	

	printf("%d",sum);

	
	return 0;
}
