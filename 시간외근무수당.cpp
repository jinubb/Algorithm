#include<stdio.h>
int main(void)
{
	float start[5],fin[5],time[5],sum_time;
	int pay[5],sum_pay,i;
	
	for(i=0;i<5;i++){
		scanf("%f %f",&start[i],&fin[i]);
		time[i]=fin[i]-start[i];
		if(time[i]<=1.0)
		    time[i]=0.0;
		else if(time[i]>5.0)
		    time[i]=4.0;
		else
		    time[i]-=1.0;
		pay[i]=time[i]*10000;
	}
	sum_time=time[0]+time[1]+time[2]+time[3]+time[4];
	sum_pay=pay[0]+pay[1]+pay[2]+pay[3]+pay[4];

	if(sum_time>=15.0){
		sum_pay/=100.0;
		sum_pay*=95;
	}
	else if(sum_time<=5.0){
		sum_pay/=100.0;
		sum_pay*=105;
	}
	printf("%d",sum_pay);
	return 0;
}
