#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m;
	int relation[m][2];
	printf("������ ��: ");
	scanf("%d",&n);
	printf("����Ʈ�� ����: ");
	scanf("%d",&m);
	printf("ģ������: ");
	for(i=0; i<m; i++){
		for(j=0; j<2; j++){
			scanf("%d",&relation[i][j]);
	}
	return 0;
}
