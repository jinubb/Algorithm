#include<stdio.h>
int main(void)
{
	int a,b,k,num;
	char char_k;

	scanf("%d %d %d",&a,&b,&k);
	char_k = k+48;
	num=b-a+1;
	char x[num][9];
	int i,j;
	
	for(i=0;i<num;i++)
	{
	    sprintf(x[i],"%d",a);
	    a++;
	}

	int counter=0;
	for(i=0;i<num;i++)
	    for(j=0;j<9;j++)
	    {
	    	if(x[i][j]==char_k)
	    		counter++;
			else if (x[i][j]!=NULL)
			    break;
		}
		
	printf("%d",counter);
	return 0;
}
