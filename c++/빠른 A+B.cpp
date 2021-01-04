#include<stdio.h>
int main(void){
	int num;
	scanf("%d",&num);
	int a[num],b[num];
	int array[num];
	for(int i=0;i<num;i++){
		scanf("%d %d",&a[i],&b[i]);
		array[i]=a[i]+b[i];
	}
	for(int i=0;i<num-1;i++)
		printf("Case #%d: %d + %d = %d\n",i+1,a[i],b[i],array[i]);
	printf("Case #%d: %d + %d = %d",num,a[num-1],b[num-1],array[num-1]);
	return 0;
}
