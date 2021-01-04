#include<stdio.h>
int array[100001]; //메모리를 받을 배열 선언 
int dp(int n){
    if(n==1)
        return 3;
       
    if(n==2)
        return 7;
   
    if(array[n]!=0) //array[n]이 비었으면  
        return array[n]; //array[n]을 리턴 
    return array[n] = (dp(n-2)+2*dp(n-1))%9901; //array[n]에 dp(n)값을 넣어줌 
}

int main(void){
   int n;
   scanf("%d",&n);
   printf("%d",dp(n));
   return 0;
}
