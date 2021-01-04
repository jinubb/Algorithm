#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	
	int a[n],b[n],sol[n];
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		sol[i] = a[i]+b[i];
	}
	for(int i=0;i<n;i++){
		printf("%d",sol[i]);
	}
	return 0;
}
