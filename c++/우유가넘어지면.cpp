#include<stdio.h>
int main(void){
	int i,j;
	scanf("%d %d",&i,&j);
	char array[i][j];
	char new_array[j][i];
	for(int k=0;k<i;k++){
		scanf("%s",&array[k]);
	}
	
	
	for(int k=0;k<i;k++){
		for(int m=0;m<j;m++){
			if(array[k][m]=='-'){
				array[k][m]='|';
			}
			else if(array[k][m]=='|'){
				array[k][m]='-';
			}
			else if(array[k][m]=='/'){
				array[k][m]=92;
			}
			else if(array[k][m]==92){
				array[k][m]='/';
			}
			else if(array[k][m]=='^'){
				array[k][m]='<';
			}
			else if(array[k][m]=='<'){
				array[k][m]='v';
			}
			else if(array[k][m]=='v'){
				array[k][m]='>';
			}
			else if(array[k][m]=='>'){
				array[k][m]='^';
			}
 			new_array[m][k]=array[k][m];
		}
	}
	for(int k=j-1;k>=0;k--){
		for(int m=0;m<i;m++){
			printf("%c",new_array[k][m]);	
		}
		printf("\n");
	}
	return 0;
}
