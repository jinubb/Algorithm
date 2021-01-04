#include<stdio.h>
int a[200]; //피보나치_메모이제이션
int fb(int n) 
{
	if(n==1)
	    return 1;
	if(n==2)
	    return 1;
	if(a[n]!=0)
	    return a[n];
	else{
	    a[n]=fb(n-1)+fb(n-2);
	    return a[n];
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",fb(n));
	return 0;
}
