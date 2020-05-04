#include<stdio.h>
int main(void){
	int b;
	int a;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d\n",(b%10)*a);
	printf("%d\n",(b%100)/10*a);
	printf("%d\n",(b/100)*a);
	int num;
	//num = (b[0]-48) * 100 + (b[1]-48) * 10 + (b[2]-48);
	printf("%d",a*b);
	return 0;
} 




