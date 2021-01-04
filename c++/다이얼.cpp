#include<stdio.h>
#include<string.h>
char string[16];
int main(void){
	scanf("%s",&string);
	int sum=0;
	for(int i=0;i<strlen(string);i++){
		if(string[i]>=65){
			if(string[i]<68){
				string[i]=2;
			}
			else if(string[i]<71){
				string[i]=3;
			}
			else if(string[i]<74){
				string[i]=4;
			}
			else if(string[i]<77){
				string[i]=5;
			}
			else if(string[i]<80){
				string[i]=6;
			}
			else if(string[i]<84){
				string[i]=7;
			}
			else if(string[i]<87){
				string[i]=8;
			}
			else if(string[i]<91){
				string[i]=9;
			}
//			printf("%d\n",string[i]);
			sum+=string[i]+1;
			
		}
	}
	printf("%d",sum); 
	return 0;
}
