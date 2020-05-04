#include<stdio.h>
int array[30];
int sol[11];
int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int sum = a*b*c;
	int i=0;
	int j=10;
	int temp=0, cnt=0;
	while(1){
		array[i++]=(sum%j)/(j/10);
		j*=10;
		if(i==10){
			break;
		}
	}
	array[9]=0;
	
	int mode=0;
	for(i=0;i<30;i++){
		if(array[i]==0){
			if(array[i+1]==0){
				if(mode==0){
					
					temp = i;
					mode = 1;
				}
				cnt++;
			}
			else{
				cnt=0;
				temp = 0;
				mode = 0;
			}
		}
		if(cnt>9){
//			array[temp]='\0';
			break;
		}
	}

	for(i=0;i<temp;i++){
		sol[array[i]]++;
	}
	for(i=0;i<10;i++){
		printf("%d\n",sol[i]);
	}
//	printf("temp = %d",temp);




/*	for(i=0;i<30;i++){
		printf("%d ",array[i]);
	}*/
	return 0;
}
