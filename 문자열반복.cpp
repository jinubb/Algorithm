#include<stdio.h>
#include<string.h>
//int T; 
//char new_string[1000][161];
int main(void){
	int T;
	scanf("%d",&T);
	int R[T];
	char S[T][21];
	for(int i=0;i<T;i++){
		scanf("%d %s",&R[i],&S[i]);
	}
	
	char new_string[T][161];
	for(int i=0;i<T;i++){
		for(int j=0;j<160;j++){
			new_string[i][j]='\0';
		}
	}
	
	int temp=0;
	for(int i=0;i<T;i++){
		for(int j=0;j<strlen(S[i]);j++){
			for(int k=0;k<R[i];k++){
				new_string[i][temp]=S[i][j];
				temp++;
			}
		}
		temp=0;
	}
	
	for(int i=0;i<T;i++){
		printf("%s\n",new_string[i]);
	}
	return 0;
}
