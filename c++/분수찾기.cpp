#include<stdio.h>
int array[3200][3200];
int main(void){
	int x;
	scanf("%d",&x);
	for(int i=0;i<3200;i++){
		for(int j=0;j<3200;j++){
			array[i][j]=1;
		}
	}
	int x=1, y=1;
	while(1){
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				
			}
		}
		x++;
		y++;
	} 
	return 0;
}
