#include<stdio.h>
int counter=0;
int fibo(int n)
{
	printf("현재 호출된 함수는 fibo %d입니다.\n",n); 
	if(n==1)
	{
	    return 0;
	}
	else if(n==2){
	    return 1;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(void)
{
	int k;
	k = fibo(8);
	printf("\n피보나치 수열 8번째 숫자는 %d입니다\n\n",k);
	return 0;
}
