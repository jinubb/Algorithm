#include<stdio.h>
int array[101];
int i;
int fibo(int n){ 
	array[1]=array[2]=1;
	for(i=3;i<=n;i++)
	{
		array[i]=array[i-1]+array[i-2];
	}
	return array[n];
}
int main(void)
{
	printf("%d",fibo(5));
	return 0;
}
