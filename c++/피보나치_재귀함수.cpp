#include<stdio.h>
int fb(int n) //피보나치_재귀함수 
{
	if(n==1)
	    return 1;
	if(n==2)
	    return 1;
	return fb(n-1)+fb(n-2);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",fb(n));
	return 0;
}
