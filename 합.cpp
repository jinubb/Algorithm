#include<stdio.h>
int sum;
int fun(int num){
	while(num!=0){
		sum +=num;
		num--;
	}

	return sum;
	
}
int main(void){
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
	return 0;
}
