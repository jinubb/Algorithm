#include<stdio.h>
#include<math.h>
int main(void)
{
    long double i,j;
    int n;
    long double k;
    long double min=9999;
    long double bun,p,aver;
    scanf("%d %Lf",&n,&k);
    long double array[n];
    for(i=0;i<n;i++)
    {
        scanf("%Lf",&array[i]);
        
    }
    //aver/=n;
    int x,counter=0; 
    
    for(x=0;x<n-k+1;x++){
        for(i=0;i<n-k+1-x;i++)
        {
			for(j=i;j<i+k+x;j++)
			{
            	aver+=array[j];				
			}
			aver/=float(k+x);
            for(j=i;j<i+k+x;j++)
            {
                bun+=(array[j]-aver)*(array[j]-aver);
                counter++;
            }
        	bun/=(k+x);
  			p=sqrt(bun);
  			if(p<min)
  			{
   				min=p;
  			}
  			printf("%d번째 p값 : %.11lf\n",i,p);
  			printf("aver = %.11lf bun = %.11lf\n",aver,bun);
  			printf("x값 %d i %d j %d k %d counter %d\n",x,i,j,k,counter);
  		    bun=0;
  		    counter=0;
  		    aver=0;
 		}
 		
 	}
 	printf("%.11Lf",min);
 	return 0;
} 

