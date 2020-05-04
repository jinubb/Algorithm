#include<stdio.h>
int main(void)
{
	int i,j,temp,n;
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		scanf("%d",array[i]);
	}
	for(i=0;i<n-1;i++){
		j=i;
		while(j>0 && array[j-1]>array[j]){
			temp=array[j-1];
			array[j-1]=array[j];
			array[j]=temp;
			j--;
		}	
	}
	for(i=0;i<n;i++)
	    printf("%d ",array[i]);
	return 0;
}
