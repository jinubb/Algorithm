#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
    int n;
    cin >> n; // 직원 수 

    int graph[n+1][n+1];  // 그래프 생성 

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            graph[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        int k;  // 연결된 직원과의 간선 
        scanf("%d", &k);
        if(k!=-1){
        	graph[i][k] = 1;
		}
    }
    return 0;
}
