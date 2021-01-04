#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i,j,k,l,m;
	char star[2*n-1][2*n];
	for(i=0;i<2*n-1;i++)
	    for(j=0;j<2*n;j++)
	        star[i][j]='\0';
    for(i=0;i<n;i++)
    {
    	for(j=n-1-i;j<n;j++)
    	{
    		star[i][j]='*';
    		star[i][2*n-1-j]='*';
		}
	}
	for(i=0;i<2*n-1;i++){
	    for(j=0;j<2*n;j++)
	        printf("%c",star[i][j]);
	    printf("\n");
	}
	return 0;
}
