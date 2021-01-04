#include<iostream>
#include<cmath>
using namespace std;
int main(void){
	int n;
	int w,h;
	cin >> n >> w >> h;
	
	double k;
	k = w*w + h*h;
	k = sqrt(k);
	
	double a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i] > k){
			cout << "NE" << endl;
		}
		else{
			cout << "DA" <<endl;
		}
	}
	return 0;
}
