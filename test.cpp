#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
	int b[9]={1,1,2,3,4,5,6,7,8};
	int c[10]={0,1,2,3,4,5,6,7,8,9};
	for(int i=0;i<9;i++){
		c[b[i]]=0;
	}
	for(int i=1;i<=9;i++){
		printf("%d",c[i]);
	}
	return 0;
}
