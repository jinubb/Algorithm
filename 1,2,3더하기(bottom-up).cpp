#include<stdio.h>
int array[100001];
int dp(int x){
	int i;
	array[1]=1;
	array[2]=2;
	array[3]=4;
	for(i=4;i<=x;i++){
		array[i]=array[i-1]+array[i-2]+array[i-3];
	}
	return array[x];
}
int main(void)
{
	int T;
	scanf("%d",&T);
	int i, a[T];
	for(i=0;i<T;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<T;i++)
	    printf("%d\n",dp(a[i]));
	return 0;
 } 
