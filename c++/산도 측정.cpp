#include<stdio.h>
#include<math.h>

int dif(int x,int y)
{
	if(x>y)
	    return x-y;
	else
	    return y-x;
}
int main(void)
{
	int N;
	int i=0;
	int x=0;
	int counter[1001];
	for(i=0;i<1001;i++)
	{
		counter[i]=0;
	}
	scanf("%d",&N);
	int num[N];
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<N;i++)
    {
    	x=num[i];
    	counter[x]++;
	}


	int mex_one=0,mex_two=0,k=0,real_one=0,real_two;
	for(i=1;i<1001;i++)
	{
		if(counter[i]>mex_one)
		{
			k=i;
			real_one=k;
			mex_one=counter[i];
		}
		else if(counter[i]==mex_one&&counter[i]!=0)
		{
			if(k<i)
			    real_one=i;
		}
	}
	counter[real_one]=0;
	for(i=1;i<1001;i++)
	{
		if(counter[i]>mex_two)
		{
			k=i;
			real_two=k;
			mex_two=counter[i];
		}
		else if(counter[i]==mex_two&&counter[i]!=0)
		{
			if(dif(real_one,k)>=dif(real_one,i))
			{
			    real_two=k;
		    }
			else
			{
			    real_two=i;
			}
		}
	}
	
	int solution;
	solution = dif(real_one,real_two);
	printf("%d",solution);
	return 0;
} 
