#include<stdio.h>
long long memo[100];
long long fibo(int n){
	memo[1]=0;
	memo[2]=1;
	memo[3]=1;
	if(memo[n]!=0){
		return memo[n];
	}
	return memo[n] = fibo(n-1) + fibo(n-2); 
}
int main(void){
	int num;
	scanf("%d",&num);
	printf("%lld",fibo(num+1));
	return 0;
}
