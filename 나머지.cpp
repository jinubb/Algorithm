#include<stdio.h>
int array_2[42];
int main(void){
	int array[10];
	int mode=0;
	int sum=0; 
	for(int i=0;i<10;i++){
		scanf("%d",&array[i]);
		array[i]= array[i]%42;
		if(array[i]==0){
			mode = 1;
		}
		else if(array[i]!=0){
			array_2[array[i]]=1;
		}
	}
	
	for(int i=0;i<42;i++){
		if(array_2[i]!=0){
			sum++;
		}
	}
	if(mode==1){
		printf("%d",sum+1);
	}
	else{
		printf("%d",sum);
	}
	
	
	return 0;
}
