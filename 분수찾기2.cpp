#include<stdio.h>
int array[3200][3200];
int n;
int cal(int a,int j){
	while(a<n){
		a+=1+(4*j);
		j++;
	}
	return j-1;
}
int main(void){
	int n;
	scanf("%d",&n);
	int i=0;
	int x=-1;
	while(x<n){
		x += 1 + (4*i);
		i++;
	}
	
	
	int sol = i-1;
	x=-1;
	i=0;
	int cnt=0;

	if(n==1){
		printf("1");
	} 
	else{
		while(sol != cal(x--,i)){
			cnt++;
		} 
	}
	printf("%d",cnt);
		

	return 0;
}
