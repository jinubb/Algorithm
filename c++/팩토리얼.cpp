#include<stdio.h>
int memo[1001];
int factorial(int n){
	memo[1]=1;
	memo[0]=1;
	if(memo[n]!=0){
		return memo[n];
	}
	return memo[n] = factorial(n-1) * n; 
}
int main(void){
	int num;
	scanf("%d",&num);
	printf("%d",factorial(num));
	return 0;
}
