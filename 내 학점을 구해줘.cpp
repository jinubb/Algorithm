#include<iostream>
using namespace std;
int main(void){
	int t;
	int sum =0;
	double sum_grade = 0.0;
	double grade =0.0;
	int temp;
	cin >> t;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		for(int j=0;j<n;j++){
			cin >> temp >> grade;
			sum+=temp;
			sum_grade += grade;
		}
		sum_grade /=n;
		printf("%d %.1f",sum,sum_grade);
		sum=0;
		sum_grade=0;
	}
	return 0;
} 
