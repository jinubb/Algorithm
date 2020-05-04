#include<stdio.h>
int compare1(int x,int y){
	if (x>y)
		return x;
	else
		return y;
}
int compare2(int x, int y, int z){
	return (compare1(compare1(x,y),z));
}
int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int sol;
	if(a==compare2(a,b,c)){
		sol = compare1(b,c);
	}
	else if(b==compare2(a,b,c)){
		sol = compare1(a,c);
	}
	else{
		sol = compare1(a,b);
	}
	printf("%d",sol); 
	return 0;
}
