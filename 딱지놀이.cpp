#include<stdio.h>
int main(void)
{
	int B_card_num,A_card_num,N,i,j,o;
	int score,Ax=0,Ay=0,Ak=0,Az=0,Bx=0,By=0,Bz=0,Bk=0;
	scanf("%d",&N);
	char R[N];
	for(i=0;i<N;i++){
		scanf("%d",&A_card_num);
		for(j=0;j<A_card_num;j++){
			scanf("%d",&score);
			if(score==4)
			    Ax++;
			else if(score==3)
			    Ay++;
			else if(score==2)
			    Az++;
			else if(score==1)
			    Ak++;
		}
		scanf("%d",&B_card_num);
		for(o=0;o<B_card_num;o++){
			scanf("%d",&score);
			if(score==4)
			    Bx++;
			else if(score==3)
			    By++;
			else if(score==2)
			    Bz++;
			else if(score==1)
			    Bk++;
		}
		if(Ax>Bx){
			R[i]='A';
		}
		else if (Bx>Ax)
		    R[i]='B';
		else
		    if(Ay>By)
			    R[i]='A';
		    else if (By>Ay)
		        R[i]='B';
		    else
		        if(Az>Bz)
			        R[i]='A';
				else if (Bz>Az)
				    R[i]='B';
				else
			        if(Ak>Bk)
			            R[i]='A';
				    else if (Bk>Ak)
				        R[i]='B';
				    else
				        R[i]='D';
		Ax=0,Ay=0,Ak=0,Az=0,Bx=0,By=0,Bz=0,Bk=0;
	    //printf("\n\n%d %d %d %d %d",Ax,Ay,Bx,By,Bz);
	}
	
	for(i=0;i<N;i++)
	{
		printf("%c\n",R[i]);
	}
	return 0;
}
