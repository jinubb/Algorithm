#include<stdio.h>
int newnum(int n){
	int digit1, digit2,new_digit1,new_digit2;
	if(n < 10){
		return n*10+n;
	}
	else{
		digit1 = n / 10;
		digit2 = n % 10;
		if(digit1 + digit2 >=10){
			new_digit2 = (digit1 + digit2)%10;
		}
		else{
			new_digit2 = digit1+ digit2;
		}
		new_digit1 = digit2;
		return new_digit1 * 10 + new_digit2;
	}
}
int main(void){
	int num;
	scanf("%d",&num);
	int temp = num;
	int cnt=0;
	while(1){
		temp = newnum(temp);
		cnt++;
		if(num==temp){
			break;
		}
	}
	printf("%d",cnt);
	return 0;
}
