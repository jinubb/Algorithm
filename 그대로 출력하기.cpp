#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
	char array[100];

	while (fgets(array,sizeof(array),stdin)){
		if (array[0] == '\0')
			return 0;		
		else
			printf("%s",array);
	}
	return 0;
}
