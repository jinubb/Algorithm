#include<stdio.h>
int main(void){
	int N;
	scanf("%d",&N);
	char array[N];
	scanf("%s",&array);
	int sum=0;
	for(int i=0;i<N;i++){
		sum+=array[i]-48;
	}
	printf("%d",sum);
	return 0;
}
