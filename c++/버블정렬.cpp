#include<stdio.h>
int main(void)
{
	int temp,i,j;
	int array[10]= {1,10,5,8,7,6,4,3,2,9};
	for(i=0;i<10;i++)
	    for(j=0;j<9;j++){
	    	if(array[j]>array[j+1]){
	    		temp=array[j];
	    		array[j]=array[j+1];
	    		array[j+1]=temp;
			}
		}
	for(i=0;i<10;i++)
	    printf("%d ",array[i]);
	
	return 0;
}
