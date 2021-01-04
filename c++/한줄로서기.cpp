#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i=0;
	int array[n];
	int sol[n];
	
	
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
		sol[i]=11;
	}
	int cnt;
	int j;
	for(i=0;i<n;i++){
		cnt=array[i];
		//printf("%d \n",array[i]);
		for(j=0;j<n;j++){
			if(cnt==0){
				if(sol[j]==11){
					sol[j]=i+1;
				}
				else if(sol[j+1]==11){
					sol[j+1]=i+1;
				}
				else if(sol[j+2]==11){
					sol[j+2]=i+1;
				}
				else if(sol[j+3]==11){
					sol[j+3]=i+1;
				}
				else if(sol[j+4]==11){
					sol[j+4]=i+1;
				}
				else if(sol[j+4]==11){
					sol[j+4]=i+1;
				}
				else if(sol[j+5]==11){
					sol[j+5]=i+1;
				}
				else if(sol[j+6]==11){
					sol[j+6]=i+1;
				}
				else if(sol[j+7]==11){
					sol[j+7]=i+1;
				}
				else if(sol[j+8]==11){
					sol[j+8]=i+1;
				}
				else if(sol[j+9]==11){
					sol[j+9]=i+1;
				}
				
				//printf("%d 사람은 %d번째에 있습니다.\n",i+1,j+1);
				break;
			}
			else if(sol[j]==11){
				//printf("카운트 뺄셈\n");
				cnt--;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",sol[i]);
	}
	return 0;
}
