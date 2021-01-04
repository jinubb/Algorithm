#include <stdio.h>
int main(void){
	int A, B, C, x;

	scanf("%d %d %d", &A, &B, &C);
	if (B >= C)
    {
        printf("-1");
        return 0;
    }
	x = A / (C - B) + 1;

	if(x <= 0){
		printf("-1");
	}
	else {
		printf("%d",x);
	}
	return 0;
}
