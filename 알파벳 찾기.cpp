#include<stdio.h>
#include<string.h> 
int main(void){ // a=97 
	char array[100];
	int array_2[26];
	for(int i=0;i<26;i++){
		array_2[i]=-1;
	}
	scanf("%s",&array);
	int sum=0;
	for(int i=0;i<strlen(array);i++){
		if(array_2[array[i]-97]==-1)
			array_2[array[i]-97]=i;
	}
	for(int i=0;i<26;i++){
		printf("%d ",array_2[i]);
	}
	return 0;
}
