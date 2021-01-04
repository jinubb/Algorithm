#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int n=0;
	int i;
	int j=0;
	int arr[4]={0,};
	int temp=0;
	
	int m=10;//미지수
	int any[10]={0,}; 
	int many[100]={0,};
	
	for(i=0;i<m-j;i++){
		for(j=1;j<m;j++){
				any[j-1]=factorial(j)/factorial(j-i);
				many[10*i+j-1]=any[j-1];
		}	 
	}
	
		
	//오름차순도 해줘야함
	for(i=0;i<100;i++){
		if(many[i]>many[i+1]){
			temp=many[i+1];
			many[i+1]=many[i];
			many[i]=temp;
		}
	}
	 
	//여기는 최종 검출 
	for(i=0;i<4;i++){
		scanf("%d",&n);
		arr[i]=many[n];
	}
	
	for(i=0;i<4;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}

int factorial(int x){
	if(x==1){
		return 1;
	}
	
	return x*factorial(x-1);
} 
