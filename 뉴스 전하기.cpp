#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
    int n;
    cin >> n; // ���� �� 

    int graph[n+1][n+1];  // �׷��� ���� 

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            graph[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        int k;  // ����� �������� ���� 
        scanf("%d", &k);
        if(k!=-1){
        	graph[i][k] = 1;
		}
    }
    return 0;
}
