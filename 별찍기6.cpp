#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i,j,k,l;
	for(i=0;i<n;i++)
	{
	    for(j=n-i;j<n;j++)
	    {
	    	printf(" ");
		}
		for(k=i;k<n*2-1-i;k++)
		    printf("*");
		
		printf("\n");
	}
		
	return 0;
}
