#include<stdio.h>

int sumdigit(int x){
	if(x<10){
		return x;
	}
	else if(x<100){
		return (x/10)+(x%10);
	}
	else if(x<1000){
		return (x/100)+((x%100)/10)+(x%10);
	}
	else if(x<10000){
		return (x/1000)+((x%1000)/100)+((x%100)/10)+(x%10);
	}
}
int sumorigin(int n){
	return n+sumdigit(n);
}
int main(void){
	int array[10000];
	for(int i=0;i<10000;i++){
		array[i]=1;
	}
	for(int i=0;i<10000;i++){
		if(array[sumorigin(i)]!=0 && sumorigin(i) < 10000){
			array[sumorigin(i)]=0;
		}
	}
	for(int i=0;i<10000;i++){
		if(array[i]!=0){
			printf("%d\n",i);
		}
	}
	return 0;
}

