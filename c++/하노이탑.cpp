#include<iostream>
using namespace std;
long long k;
int memo[101][3][3][3];
// n���� ������ from ���� temp�� ���� to�� �ű��.
void hanoi(int n, int from, int temp, int to){


    if (n == 1){
        printf("%d %d\n",from,to);
        k++;
    }
    else{
        hanoi(n - 1, from, to, temp);    // 1��  N-1���� ������ ���3�� ���� 2�� �ű��.
        printf("%d %d\n",from,to);  // 2�� ��� 1���� 1���� ������ ��� 3���� �ұ��.
        k++;
        hanoi(n - 1, temp, from, to);    // 3�� ��� 2���� N-1���� ������ ��� 3���� �ű��.
    }

}

void hanoi2(int n, int from, int temp, int to){
    if (n == 1){
        k++;
    }
    else{
        hanoi2(n - 1, from, to, temp);    // 1��  N-1���� ������ ���3�� ���� 2�� �ű��.
        k++;
        hanoi2(n - 1, temp, from, to);    // 3�� ��� 2���� N-1���� ������ ��� 3���� �ű��.
    }

}

int main(void){
	int n;
	cin >> n; 
	hanoi2(n,1,2,3);
	cout << k << endl;
	hanoi(n,1,2,3);  // 5���� ����, source 1��, temporary 2��, destination 3�� 



	return 0;
}
