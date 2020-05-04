#include<iostream>
using namespace std;
int array[1000];
int dif(int a,int b){
	if(a>b){
		return a-b;
	}
	else{
		return b-a;
	}
}
int main(void){
	for(int i=1;i<10;i++){
		array[i]=1;  //한자리 한수 
	}
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			array[i*10+j]=1; //두자리 한수 	
		}
	}
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				if(dif(i,j)==dif(j,k) && i!=k){
					array[i*100+j*10+k]=1;
				}
				else if(i==j && j==k){
					array[i*100+j*10+k]=1;
				} 
			}
		}
	}
	
	int n;
	cin >> n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(array[i]==1){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
} 
