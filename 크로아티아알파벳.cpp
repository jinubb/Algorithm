#include<stdio.h>
char string[102];
int main(void){
	scanf("%s",&string);
	int cnt=0;
	for(int i=0;i<100;i++){
		if(string[i] == 'c'){
			if(string[i+1]== '=' || string[i+1]== '-'){
				cnt++;
				i++;
				continue;
			}
		}
		else if(string[i]=='d'){
			if(string[i+1]=='z' && string[i+2]=='='){
				cnt++;
				i+=2;
				continue;
			}
			else if(string[i+1]=='-'){
				cnt++;
				i++;
				continue;
			}
		}
		else if(string[i]=='l'){
			if(string[i+1]=='j'){
				cnt++;
				i++;
				continue;
			}
		}
		else if(string[i]=='n'){
			if(string[i+1]=='j'){
				cnt++;
				i++;
				continue;
			}
		}
		else if(string[i]=='s'){
			if(string[i+1]=='='){
				cnt++;
				i++;
				continue;
			}
		}
		else if(string[i]=='z'){
			if(string[i+1]=='='){
				cnt++;
				i++;
				continue;
			}
		}
		if(string[i] != '\0') 
			cnt++;
	}
	printf("%d",cnt);
	return 0;
}
