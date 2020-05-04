#include<stdio.h>
#include<string.h>
int main(void)
{
	double M, V, R;
	double x;
	char now[10];
	scanf("%lf %lf %lf",&M,&V,&R);
	
	x=M/V;
	
	if(x<R)
	{
		strcpy(now,"UP");
	}
	else if (x==R)
		strcpy(now,"STOP");
	else if (x>R)
		strcpy(now,"DOWN");
		
    printf("%.2lf %s",x,now);
    return 0;
	
	
}
