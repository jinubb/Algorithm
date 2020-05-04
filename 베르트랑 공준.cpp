#include<iostream>
//#include<vector>
using namespace std;
int main(void){
	bool isPrime = true;
//	vector<int> v1;
	int x;
	int cnt=0;
	while(1){
		scanf("%d",&x);
		if(x==0)  break; 
//		if(x==1)  v1.push_back(2);
		if((x+1)%2==0){
		for(int i=x+2;i<=(x*2);i+=2){
			for(int j=2;j<i;j++){
				if(i%j==0){
					isPrime = false;
					break;
				}
			}
			if(isPrime){
				cnt++;
			}
			else isPrime = true;
		}
		}
		else{
			for(int i=x+1;i<=(x*2);i+=2){
			for(int j=2;j<i;j++){
				if(i%j==0){
					isPrime = false;
					break;
				}
			}
			if(isPrime){
				cnt++;
			}
			else isPrime = true;
		}
		}
		
		printf("%d\n",cnt);
		cnt = 0;
//		v1.clear();
	}
	return 0;
}
