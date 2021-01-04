#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	long long A[n];
	long long B[n];
	
	for(int i=0;i<n;i++){
		scanf("%lld",&A[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%lld",&B[i]);
	}
	
	long long c=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(A[i]<B[i]){	//연장해야하는경우 
			if(B[i]>=30){
				c = ( B[i] - A[i] ) / 30;
				cnt+=c;
			}
			cnt++;
			c=0;
		}
		else { //연장하지않고도 사용할수있는경우
			continue;	 
		}
	}
	printf("%d",cnt);
	return 0;
}
