#include<stdio.h>
int array[100001]; //�޸𸮸� ���� �迭 ���� 
int dp(int n){
    if(n==1)
        return 3;
       
    if(n==2)
        return 7;
   
    if(array[n]!=0) //array[n]�� �������  
        return array[n]; //array[n]�� ���� 
    return array[n] = (dp(n-2)+2*dp(n-1))%9901; //array[n]�� dp(n)���� �־��� 
}

int main(void){
   int n;
   scanf("%d",&n);
   printf("%d",dp(n));
   return 0;
}
