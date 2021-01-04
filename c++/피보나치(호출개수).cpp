#include<stdio.h>
int cnt0;
int cnt1;
int fibonacci(int n) {
    if (n == 0) {
        cnt0++;
        return 0;
    } else if (n == 1) {
        cnt1++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
struct cnt{
	int cnt_0;
	int cnt_1;
};
int main(void){
	int num;
	scanf("%d",&num);
	int array[num];
	int sol[num];
	struct cnt fibo_cnt[num];
	for(int i=0;i<num;i++){
		scanf("%d",&array[i]);
		fibonacci(array[i]);
		fibo_cnt[i].cnt_0 = cnt0;
		fibo_cnt[i].cnt_1 = cnt1;
		cnt0=0;
		cnt1=0;
	}
	for(int i=0;i<num;i++){
		printf("%d %d\n",fibo_cnt[i].cnt_0,fibo_cnt[i].cnt_1);
	}
	return 0;
}
