#include<stdio.h>
int a[13]; 
int dp(int n)
{
	if(n==1)
	    return 2;
	if(a[n]!=0)
	    return a[n];
	return a[n]=2*dp(n-1);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	    printf("%d:A->B\n",i);
	for(i=n;i>0;i--)
	    printf("%d:B->A\n",i);
	printf("%d",dp(n));
	return 0;
}
