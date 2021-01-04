#include<stdio.h>
int main(void){
	int array[8];
	for(int i=0;i<8;i++){
		scanf("%d",&array[i]);
	}
	int mode=0;
	for(int i=0;i<8;i++){
		if(array[i]!=i+1){
			mode=1;
			break;
		}
		if(i==7){
			mode=2;
		}
	}
	if(mode!=2){
		for(int i=0;i<8;i++){
			if(array[i]!=8-i){
				mode=1;
				break;
			}
			if(i==7){
				mode=3;
			}
		}
	}
	if(mode == 1){
		printf("mixed");
	}
	else if(mode == 2){
		printf("ascending");
	} 
	else if (mode == 3){
		printf("descending");
	}
	
	return 0;
}
