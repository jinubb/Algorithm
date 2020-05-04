#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c;
    int sum=0, gcd=0,i;
    scanf("%d %d %d",&a,&b,&c);
    
    sum = a*b*c;
    
    for(i=1;i<=a||i<=b||i<=c;i++)
    {
    	if((a%i==0 && b%i==0)||(a%i==0 && c%i==0)||(b%i==0 && c%i==0))
    	{
    		gcd=i;
		}
	}
	
	sum /=gcd;
    
    printf("%d",sum);

	return 0;
} 
