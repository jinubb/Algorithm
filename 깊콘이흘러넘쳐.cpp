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
		if(A[i]<B[i]){	//�����ؾ��ϴ°�� 
			if(B[i]>=30){
				c = ( B[i] - A[i] ) / 30;
				cnt+=c;
			}
			cnt++;
			c=0;
		}
		else { //���������ʰ� ����Ҽ��ִ°��
			continue;	 
		}
	}
	printf("%d",cnt);
	return 0;
}
