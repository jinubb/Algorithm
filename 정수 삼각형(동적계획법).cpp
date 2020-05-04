#include<stdio.h>
int main(void)
{
	int array[501][501]={0,};
	int score[501][501]={0,};
	int i,k=1,n,sum=0,j;
	scanf("%d",&n);
	scanf("%d",&score[1][1]);
	scanf("%d",&score[2][1]);
	scanf("%d",&score[2][2]);
	
	for(i=3;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		    scanf("%d",&score[i][j]);  
	    }
/*	    if(score[k]>score[k+1]){
			    sum+=score[k];
	            printf("%d번째 sum값 %d\n",i,sum); 
		    }
		    else{
		        sum+=score[k+1];
		        k++;
	            printf("%d번째 sum값 %d(k값증가)\n",i,sum); 		        
		    }*/
	}
	
	array[1][1]=score[1][1];
	array[2][1]=array[1][1]+score[2][1];
	array[2][2]=array[1][1]+score[2][2];
	
	for(i=3;i<=n;i++)
	{
		array[i][1] = array[i-1][1]+score[i][1];
		array[i][i] = array[i-1][i-1]+score[i][i];
	}
	
	for(i=3;i<=n;i++)
	    for(j=2;j<=i-1;j++){
	    	if(array[i-1][j-1]>=array[i-1][j]){
	    		array[i][j]=array[i-1][j-1]+score[i][j];
			}
			else
			    array[i][j]=array[i-1][j]+score[i][j];	    
		}
	int max=-1;
	for(i=1;i<=n;i++)
	{
		if(array[n][i]>max)
		    max=array[n][i];
	}
	/*for(i=1;i<=n;i++){
		printf("%d  ",array[n][i]);
	}*/
	printf("%d",max);
	return 0;
}
