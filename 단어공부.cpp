#include<stdio.h>
#include<string.h>
#include<limits.h>
int array[30];
int main(void){
	char string[1000000];
	scanf("%s",&string);
	int num = strlen(string);
	for(int i=0;i<num;i++){
		if(string[i]>=97){
			string[i]-=32;
		}
		array[string[i]-65]++;
	}
	
	int max = INT_MIN;
	int temp_array=0;
	for(int i=0;i<30;i++){
		if(array[i] > max){
			max = array[i];
			temp_array = i;
		}
	}
	
	int temp1=0;
	temp1 = max;
	max = INT_MIN;
	array[temp_array]=0;
	
	for(int i=0;i<30;i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	
	if(max == temp1){
		printf("?");
	}
	else{
		printf("%c",temp_array+65);
	}

	return 0;
}
