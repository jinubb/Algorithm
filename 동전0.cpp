#include<stdio.h>
int main(void)
{
	int num;
	int target;
	scanf("%d %d",&num,&target);
	int coin[num];
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&coin[i]);
	}
	
	int cnt=0;
	
	for(i=num-1;i>=0;i--){
		if(coin[i]<=target){
			cnt += target/coin[i];
			target = target % coin[i];
		}
		if(target == 0)
		    break;
	}
	
	printf("%d",cnt);
	return 0;
}
