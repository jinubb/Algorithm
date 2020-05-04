#include<stdio.h>
int main(void)
{
	int T;
	int i;
	scanf("%d",&T);
    int bonus[T];
	for(i=0;i<T;i++)
	    bonus[i]=0;
	int a,b;
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&a,&b);
		if(a==0) 
		    bonus[i]+=0;
		else if(a<=1)
		    bonus[i]+=5000000;
		else if(a<=3)
		    bonus[i]+=3000000;
		else if(a<=6)
		    bonus[i]+=2000000;
		else if(a<=10)
		    bonus[i]+=500000;
		else if(a<=15)
		    bonus[i]+=300000;
		else if(a<=21)
		    bonus[i]+=100000;
		    
		if(b==0) 
		    bonus[i]+=0;
		else if(b<=1)
		    bonus[i]+=5120000;
		else if(b<=3)
		    bonus[i]+=2560000;
		else if(b<=7)
		    bonus[i]+=1280000;
		else if(b<=15)
		    bonus[i]+=640000;
		else if(b<=31)
		    bonus[i]+=320000;		
	}
	for(i=0;i<T;i++)
	    printf("%d\n",bonus[i]);
	return 0;
}
