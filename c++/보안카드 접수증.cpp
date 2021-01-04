#include<stdio.h>
#include<stdlib.h>
struct ID{
	char name[20];
	int age;
	char blood;
	int pw;
	char num[20];
};
int main(void)
{
    struct ID a;
    scanf("%s",a.name);
    getchar();
    scanf("%d",&a.age);
    getchar();
    scanf("%c",&a.blood);
    getchar();
    scanf("%d.%s",&a.pw,a.num);
 
    
    printf("%s\n",a.name);
    printf("%d\n",a.age);
    printf("%c\n",a.blood);
    printf("%d.%s\n",a.pw,a.num);
    return 0;
}

