#include<stdio.h>
int main(void){
	char b[3];
	int a;
	scanf("%d",&a);
	scanf("%s",&b);
	printf("%d\n",(b[2]-48)*a);
	printf("%d\n",(b[1]-48)*a);
	printf("%d\n",(b[0]-48)*a);
	int num;
	num = (b[0]-48) * 100 + (b[1]-48) * 10 + (b[2]-48);
	printf("%d",a*num);
	return 0;
} 




