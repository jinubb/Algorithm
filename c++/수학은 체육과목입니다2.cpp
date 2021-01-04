#include<stdio.h>
int main(void){
	int num;
	scanf("%d",&num);
	int mode=0;
	if((num-1)%8==0){
		mode = 1;
	}
	else if((num-5)%8==0){
		mode =5;
	}
	else if(num%8==0 || (num+6)%8==0){
		mode =2;
	}
	else if((num-3)%4==0){
		mode = 3;
	}
	else{
		mode = 4;
	}
	printf("%d",mode);
	return 0;
} 
