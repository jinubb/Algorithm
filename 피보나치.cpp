#include<stdio.h>
int counter=0;
int fibo(int n)
{
	printf("���� ȣ��� �Լ��� fibo %d�Դϴ�.\n",n); 
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
	printf("\n�Ǻ���ġ ���� 8��° ���ڴ� %d�Դϴ�\n\n",k);
	return 0;
}
