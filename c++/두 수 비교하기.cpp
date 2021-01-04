#include<stdio.h>
int compare(int x,int y){
	if( x > y){
		return 1;
	}
	else if( x== y ){
		return 2;
	}
	else{
		return 3;
	}
}
int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	if (compare(a,b)==1){
		printf(">");
	}
	else if (compare(a,b)==2){
		printf("==");
	}
	else{
		printf("<");
	}
	
	return 0;
}
