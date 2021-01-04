#include<stdio.h>
#include<limits.h>
double average(double array[], int num){
	double sum;
	for(int i=0;i<num;i++){
		sum+=array[i];
	}
	sum/=num;
	return sum;
}
int main(void){
	int n;
	scanf("%d",&n);
	double array[n];
	double new_score[n];
	for(int i=0;i<n;i++){
		scanf("%lf",&array[i]);
	}
	int max = INT_MIN;
	for(int i=0;i<n;i++){
		if(array[i]>max){
			max = array[i];
		}
	}
	
	for(int i=0;i<n;i++){
		new_score[i]= (array[i]*100)/max;
	}
	
	printf("%lf",average(new_score,n));
	return 0;
	
}
