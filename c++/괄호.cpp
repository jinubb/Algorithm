#include<stdio.h>
#include<string.h>
int size;
int array_size=0;
char array[50];
char sol[50];
void push(int x)
{
	array[x]='(';
	array_size++;
}
void pop(int x)
{
	array[x]
}
int main(void)
{
	int n;
	scanf("%d",&n);
	char stack[n][50];
	for(int i=0;i<n;i++)
	{
		scanf("%s",&stack[i]);
		size=strlen(stack[i]);
		for(int j=0;j<50;j++){
    		if(stack[i][j]=='(')
    		{
    			push(j);
			}
			if(stack[i][j]==')')
			{
				pop(j);
			}
    	}
	}
			printf("%s",stack[0]);
	return 0;
}
