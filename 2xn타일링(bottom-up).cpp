#include<stdio.h>
int array[1001];
int dp(int n)
{
	int i;
	array[1]=1;
	array[2]=2;
	for(i=3;i<=n;i++){
		array[i]=(array[i-1]+array[i-2])%10007;
	}
	return array[n];
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",dp(n));
	return 0;
}
