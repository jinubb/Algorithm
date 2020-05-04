#include<stdio.h>
#include<stdlib.h>
struct room{
	unsigned int start;
	unsigned int end;
};


int main(void)
{
	int num;
	scanf("%d",&num);
	
	struct room r[num];
	
	int i,j;
	
	for(i=0;i<num;i++){
		scanf("%u %u",&r[i].start,&r[i].end);
	}

	int temp1, temp2, temp_index;
	unsigned int min;
	min = 2147483647;
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			if(r[j].start<min){
				temp_index = j;
				min = r[j].start;
			}
			else if(r[j].start == min){
				if(r[j].end < r[temp_index].end){
					temp_index = j;
					min = r[j].start;
				}
			} 
		}
		temp1 = r[i].start;
		temp2 = r[i].end;
		r[i].start = min;
		r[i].end = r[temp_index].end;
		r[temp_index].start = temp1;
		r[temp_index].end = temp2;
		min=2147483647; 
	}
	
	int search=0, cnt=0;
	unsigned int temp3=0;
	while(search != num){
		//printf("part1\n");
		for(i=search;i<num;i++){
			if(r[search].start == r[search].end){
				cnt++;
				search++;
				break;
			}
			//printf("part2\n");
			if(r[search].end > r[i].end){
				search++;
				break;
			}
			else if(r[search].end<r[i].start || i==num-1){
				cnt++;
				//printf("현재 search.start = %d end = %d\n",r[search].start,r[search].end);
				temp3 = r[search].end;
				while(temp3>r[search].start){
					search++;
					if(search==num)
					{
						break;
					}
				}
				break;
			}
		}
	}
	
	printf("%d",cnt);  //  확인 
	
	return 0;
}
