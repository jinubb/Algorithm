#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int i=0;
	int x=1;
	while(x<n){
		x += 6*i;
		i++;
	}
	if(n==1){
		printf("1");
	} 
	else
		printf("%d",i);
	return 0;
}
