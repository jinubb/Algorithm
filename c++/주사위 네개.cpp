#include<stdio.h>

int main(void)
{
	int i,j,min,index,temp;	
	int n,k,sum,a,b,c,d;
	int array[4];
	int max=0;
	scanf("%d",&n);
	for(k=0;k<n;k++){
	
        for(i=0;i<4;i++)
		    scanf("%d",&array[i]);
		
	    for(i=0;i<4;i++){    //선택정렬
		    min=9999;
		    for(j=i;j<4;j++){
			    if(min>array[j]){
				    min = array[j];
				    index = j;
			    }
		    }
		    temp=array[i];
		    array[i]=array[index];
		    array[index]=temp;
	    }
	    
	    a=array[0];
	    b=array[1];
	    c=array[2];
	    d=array[3];
	
		if(a==b && b==c && c==d)
		    sum=50000+(a*5000);
		else if(a==b && b==c || b==c&& c==d)
		    sum=10000+(b*1000);
		else if(a==b && c==d)
		    sum=2000+(a*500)+(c*500);
		else if(a==b || b==c)
		    sum=1000+(b*100);
		else if(c==d)
		    sum=1000+(c*100);
		else if(a!=b && b!=c && c!=d)
		    sum=d*100;
		if(sum>max){
			max=sum;
		}
		sum=0;
}
	printf("%d",max);
	return 0;
	
}
