#include<stdio.h>
int main(void)
{
	int a=2000000000;
	int array[a];
	int i;
	int cnt;
	for(i=0;i<2000000000;i++){
		array[a]=1;
	}
	for(i=0;i<2000000000;i++){
		if(array[a]=1){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
