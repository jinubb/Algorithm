#include<stdio.h>
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	int new_a,new_b;
	new_a = ((int)(a/100)) + ((int)(a%100 / 10) *10) + a%10 *100;
	new_b = ((int)(b/100)) + ((int)(b%100 / 10) *10) + b%10 *100;
	printf("%d",max(new_a,new_b));
	return 0;
}
