#include<stdio.h>
#include<string.h> 
int array[30];
int main(void){
	int n;
	int cnt=0;
	scanf("%d",&n);
	char string[n][101];
	int mode=0;
	int n_string[n];
	for(int i=0;i<n;i++){
		scanf("%s",&string[i]);
		n_string[i]=strlen(string[i]);
		for(int j=0;j<n_string[i];j++){
			array[string[i][j]-97] = 1;
			if(string[i][j]!=string[i][j+1]){
				if(array[string[i][j+1]-97]==1){
					mode =1;
					break;
				}
			}
		}
		if(mode==0){
			cnt++;
		}
		else if(mode==1){
			mode=0;
		}
		for(int k=0;k<30;k++){
			array[k]=0;
		}
	}
	printf("%d",cnt);
	return 0;
}
