#include<stdio.h>
int main(void){
	int A=1,B=1;
	while(A!=0 && B!=0){
		scanf("%d %d",&A,&B);
		if(A!=0 && B!=0)
			printf("%d\n",A+B);
	}
	return 0;
}
