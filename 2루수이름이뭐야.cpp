#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	char array[n][100];
	int i;
	int mode=0;
	for(i=0;i<n;i++){
		scanf("%s",array[i]);
		if(array[i][0] == 'a' && array[i][1] == 'n' && array[i][2] == 'j' && array[i][3] == '\0'){
			mode = 1;
		}
	}
	if(mode ==1 ){
		printf("构具;");
	}
	else{
		printf("构具?");
	}
	return 0;
}
