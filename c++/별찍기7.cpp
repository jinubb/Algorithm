#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i,j,k,l,m;
	for(i=0;i<n-1;i++)
    {
    	for(l=i;l<n-1;l++)
		    printf(" ");
		for(j=n-i-1;j<n+i;j++)
		    printf("*");
		printf("\n");
	}
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
