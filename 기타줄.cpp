#include<stdio.h>
#include<limits.h>
struct brand{
	int pack;
	int one;
};
int min2(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int main(void){
	int N,M;
	int min = INT_MAX;
	scanf("%d %d",&N,&M);
	struct brand b[M];
	for(int i=0;i<M;i++){
		scanf("%d %d",&b[i].pack,&b[i].one);
	}
	int num_pack=0, num_one=0;
	num_one = N % 6;
	num_pack = N / 6;
	
	for(int i=0;i<M;i++){
		if(b[i].pack >= b[i].one * 6){  // 낱개가격이 더 저렴한 경우 
			if(min>(b[i].one * M)){
				min = b[i].one * M; 
			}
		}
		if(N<6){ // 구입개수가 6보다 작은경우 
			if( min > min2(b[i].pack,b[i].one*N) ){
				min = min2(b[i].pack,b[i].one*N);
			}
		}
		if(1){  // 패키지가격이 더 저렴할경우 
			if(min>min2((b[i].pack*num_pack)+(b[i].one*num_one),(b[i].pack*(num_pack+1)))){
				min = min2((b[i].pack*num_pack)+(b[i].one*num_one),(b[i].pack*(num_pack+1)));
			}
		}
	}
	printf("%d",min);
	return 0;
	
}
