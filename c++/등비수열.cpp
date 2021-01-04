#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,r,n;
	int x=0,i=0;
	scanf("%d %d %d",&a,&r,&n);
	
	while(i<n-1)
	{
		a*=r;
		i++;
	}
	printf("%d",a);
	return 0;
} 
