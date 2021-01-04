#include<iostream>
using namespace std;
double pie=3.141592653589;
double area(int r){
	return pie * (double)r * (double)r;
}
double area_texi(int r){
	return 2.0 * (double)r * (double)r;
}
int main(void){
	int n;
	cin >> n;

	printf("%.10lf\n",area(n));
	printf("%.10lf\n",area_texi(n));

	return 0;
}
