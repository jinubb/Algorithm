#include<stdio.h>

void change(int array[],int start,int end){
   int temp;
   int k;
   k= ( (end-start) / 2 ) + 1;
   int i;
   for(i=0;i<k;i++){
      temp = array[start+i];
      array[start+i] = array[end-i];
      array[end - i] = temp;
   }
}

int main(void)
{
	int k;
	scanf("%d",&k);
	char array[k];
	int i;
	int array_max[k+1];
	int array_min[k+1];
	for(i=1;i<=k+1;i++){
		array_max[i-1]=10-i;
		array_min[i-1]=-1+i;
	}
	getchar();
	for(i=0;i<k;i++){
		scanf("%c",&array[i]);
		getchar();
	}	

	int cnt=0;
	int temp;
	int temp_array;
	int mode=0;
	int j;
	
	for(i=0;i<k;i++){
		if(array[i]=='<'){
//			printf("<를 찾았습니다.\n");
			if(mode==0){
				temp_array=i;
//				printf("temp 저장값 i = %d\n",i);
				mode=1;
			}
			cnt++;
			if(array[i+1]=='<'){
				continue;
			}
			else{
//				printf("%d 와 %d 뒤집기 실행\n",temp_array,temp_array+cnt);
				change(array_max,temp_array,temp_array+cnt);
				mode=0;
				cnt=0;
				temp_array=0;
			}
			
		}
	}
	
	for(i=0;i<k;i++){
		if(array[i]=='>'){
//			printf(">를 찾았습니다.\n");
			if(mode==0){
				temp_array=i;
//				printf("temp 저장값 i = %d\n",i);
				mode=1;
			}
			cnt++;
			if(array[i+1]=='>'){
				continue;
			}
			else{
//				printf("%d 와 %d 뒤집기 실행\n",temp_array,temp_array+cnt);
				change(array_min,temp_array,temp_array+cnt);
				mode=0;
				cnt=0;
				temp_array=0;
			}
			
		}
	}

	/*
	for(i=0;i<=k;i++){
		if(array[i]==60){
			cnt++;
			if(mode=0){
				temp2 = i;
				mode=1;
			}
			
			printf("cnt값 증가\n"); 
			if(array[i+1]!=60){
				for(j=0;j<k+1;j++){
					printf("%d ",array_max[j]);
				}
				change(array_max,temp2,temp2+cnt+1);
				printf("cnt = %d\n",cnt);
				printf("뒤집기실행 %d %d\n",temp2,temp2+cnt+1);
				cnt=0;
				mode=0;
				
			}
		}
	}
	
	
	*/
	
	
	for(i=0;i<k+1;i++){
		printf("%d",array_max[i]);
	}
	printf("\n");
	for(i=0;i<k+1;i++){
		printf("%d",array_min[i]);
	}
	return 0;
}
