#include<stdio.h>
int main(void)
{
	int i;
	int array[4];
	for(i=0;i<4;i++)
		scanf("%d",array[i]);

	/*int j,min,index,temp;
	for(i=0;i<4;i++){
		min=9999;
		for(j=i;j<4;j++){
			if(min>array[j]){
				min = array[j];
				index = j;
			}
		}
		temp=array[i];
		array[i]=array[index];
		array[index]=temp;
	}*/
	for(i=0;i<4;i++)
	    printf("%d ",array[i]);
	return 0;
}
