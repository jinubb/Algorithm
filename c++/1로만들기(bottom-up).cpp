#include<stdio.h>
int array[1000001];
int dp(int x)
{
	int case1,case2;
	array[1]=0;
	array[2]=1;
	array[3]=1;
	for(int i=4;i<=x;i++){
		if(i%3==0){
			array[i]=array[i/3]+1;
		}
		else if(i%2==0){
			array[i]=array[i/2]+1;
		}
		else
		    array[i]=array[i-1]+1;
		case1 = array[i];
		
		array[i]=array[i-1]+1;
		case2 = array[i];
		if(case1<case2)
		    array[i]=case1;
	}
	return array[x];
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",dp(n));
	return 0;
}
