#include<stdio.h>
#include<string.h>
char string[1000000];
int main(void){
	fgets(string,sizeof(string),stdin);
	int num = strlen(string);
	
	int mode=0;
	int cnt=0;
	for(int i=0;i<num-1;i++){
		if(mode==1){
			if(string[i]==32){
//				printf("%d번째에서 공백 발견",i);
				mode =0;
			}
		}
		else{
			if(string[i]!=32 && string[i]!='\0'){
//				printf("%d번째에서 cnt증가",i);
				cnt++;
				mode=1;	
			}
		}
	} 
	printf("%d",cnt);
	return 0;
}
