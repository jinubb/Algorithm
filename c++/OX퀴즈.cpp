#include<stdio.h>
#include<string.h>
int main(void){
	int n;
	scanf("%d",&n);
	int score[n];
	for(int i=0;i<n;i++){
		score[i]=0;
	}
	char array[n][80];
	int temp=0;
	for(int i=0;i<n;i++){
		scanf("%s",&array[i]);
//		printf("%d��°�� ������ %d�Դϴ�.\n",i,strlen(array[i]));
		for(int j=0;j<strlen(array[i]);j++){
			if(array[i][j]=='O'){
				temp++;
				score[i] += temp;
			}
			else{
//				printf("%d��°���� temp �ʱ�ȭ\n",j);
				temp = 0;
			}
		}
		temp = 0;
	}
	
	for(int i=0;i<n;i++){
		printf("%d\n",score[i]);
	}
	return 0;
	
}
