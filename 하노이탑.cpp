#include<iostream>
using namespace std;
long long k;
int memo[101][3][3][3];
// n개의 원반을 from 에서 temp를 거쳐 to로 옮긴다.
void hanoi(int n, int from, int temp, int to){


    if (n == 1){
        printf("%d %d\n",from,to);
        k++;
    }
    else{
        hanoi(n - 1, from, to, temp);    // 1번  N-1개의 원반을 기둥3을 거쳐 2로 옮긴다.
        printf("%d %d\n",from,to);  // 2번 기둥 1에서 1개의 원반을 기둥 3으롱 롬긴다.
        k++;
        hanoi(n - 1, temp, from, to);    // 3번 기둥 2에서 N-1개의 원반을 기둥 3으로 옮긴다.
    }

}

void hanoi2(int n, int from, int temp, int to){
    if (n == 1){
        k++;
    }
    else{
        hanoi2(n - 1, from, to, temp);    // 1번  N-1개의 원반을 기둥3을 거쳐 2로 옮긴다.
        k++;
        hanoi2(n - 1, temp, from, to);    // 3번 기둥 2에서 N-1개의 원반을 기둥 3으로 옮긴다.
    }

}

int main(void){
	int n;
	cin >> n; 
	hanoi2(n,1,2,3);
	cout << k << endl;
	hanoi(n,1,2,3);  // 5개의 원반, source 1번, temporary 2번, destination 3번 



	return 0;
}
