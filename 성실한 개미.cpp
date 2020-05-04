#include<stdio.h>
int main(void)
{
	int box[10][10];
	int i,x=1,y=1,j;
    for(i=0;i<10;i++)
       for(j=0;j<10;j++)
       {
       	    scanf("%d",&box[i][j]);
	   }
	
	for(i=0;i<20;i++)
	{
	    if (box[x][y]==0)
	    {
		    box[x][y]=9;
		    if(box[x][y+1]==0 || box[x][y+1]==2)
		    {
		    	y++;
			}
			else if(box[x+1][y]==0 || box[x+1][y]==2)
			    x++;
	    }
	    else if (box[x][y]==2)
	    {
	     	box[x][y]=9;
	     	break;
	    }
	    else
	        break;
	}
    for(i=0;i<10;i++)
    {
       for(j=0;j<10;j++)
       {
       	    printf("%d ",box[i][j]);
	   }
	   printf("\n");
    }
	return 0;
}
