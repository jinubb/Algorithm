#include<stdio.h>
double average(double array[], int num){
	double sum=0.0;
	for(int i=0;i<num;i++){
		sum+=array[i];
	}
	sum/=num;
	return sum;
}
int main(void){
	int t;
	scanf("%d",&t);

	int n[t];
	
	double aver[t];
	double rate[t];
	int temp=0;
	
	for(int i=0;i<t;i++){
		scanf("%d",&n[i]);

		double array[n[i]];
		for(int j=0;j<n[i];j++){
			scanf("%lf",&array[j]);
			getchar();
		}
		aver[i]=average(array,n[i]);
		for(int k=0;k<n[i];k++){
			if(array[k]>aver[i]){
				temp++;
			}
		}
		rate[i]= (double(temp)*100.0)/(double)n[i];
		temp =0;
	}
	
	for(int i=0;i<t;i++){
		printf("%.3lf%%\n",rate[i]);
	}
	return 0;
}
