#include<iostream>
#include<cstring>
#include<string>
using namespace std;
char sol[100];
char str[5][16];
int main(void){
	for(int i=0;i<5;i++){
		scanf("%s",&str[i]);
	}
	int k=0;
	for(int i=0;i<15;i++){
		for(int j=0;j<5;j++){
			if(str[j][i]!='\0'){
				sol[k]=str[j][i];
				k++;
			}			
		}
	}
	printf("%s",sol);
	return 0;
}
