#include<stdio.h>
#include<string.h>
int main(void){
    int a[9],b[9];
    int i,j,m,n;
    int c[10]={0,1,2,3,4,5,6,7,8,9}; // a�� ��� 0�ϰ�� 1��� �Ǵܿ� 
    for(i=0;i<9;i++){
    	scanf("%d %d",&a[i],&b[i]);
    }
    int mode = 1; 
    int mode2 = 0;
    int mode3=0;
    int mode4=0; 
    int k=-1;
    int cnt=0;
    int cnt2=0;
    int cnt3=0;
    int cnt4=0;
    int temp=0;
    int temp2=0;

    for(i=0;i<9;i++){
        if(a[i]==0){  // i��° ������ �����ϰ�� 
            a[i]=1;
    	}
     	else{
         	a[i]=0;
      	}
        for(j=0;j<9;j++){
    	    if(a[j]==1){
//            printf("Ȯ��");
           		if(k==-1){ // k�� �ʱ�ȭ�Ǿ������� 
               		k = b[j]; // k�� 2���  
               		mode2 = 1; //
            	}
            	else if(b[j]==k){  // ���� 1����� �����Ұ�� 
//            		printf("�ɸ�");
            		continue;  
            	}
            	else{  // k�� �ʱ�ȭ���� �ʾҴٸ� 
               		mode2 = 0;
               		break;  // 1����� 2���ϼ��� ���⶧���� 
            	}
         	}
         	else{
         		cnt4++;
			}
      	} 
//      	printf("%d",cnt4);
      	if(cnt4==9){ // a[0] ~ a[8]�� ��� 0�ΰ�� 
//      	printf("Ȯ��");
      		for(n=0;n<9;n++){
      			c[b[n]]=0;
			}
			for(m=1;m<=9;m++){
				if(c[m]!=0){
//					printf("Ȯ��2");
					cnt3++;
					temp2 = c[m];
				}
        		if(cnt3 == 1){   // �Ѹ��� ���ȣ���� ������ 
//        			printf("Ȯ��3");
//         			mode2 = 1;
         			temp = temp2;
//         			printf("%d",temp);
         			cnt++;
         		}
      		}
     	}
   
      	if (mode2 == 1){
//         	printf("temp������");
         	temp = k ; // 1����� �������°��(��) 
         	cnt++; 
      	}
      
      	if (cnt >= 2){  // 1����� ���̵Ǵ°�찡 2���� �̻��ϰ�� -1�� ����ؾ���  
         	mode = -1;
         	break;
      	}
      
      	if(mode == 1){  //�ڿ����� ���ߵǴ°�� 
         	if(a[i]==0){
            	a[i]=1;
         	}
         	else{
            	a[i]=0;
         	}
         	mode2=0;
         	mode3=0;
         	cnt4=0;
//         	k=-1; 
      	}
      	else{  //�ڴ� ���ð� �����Ѱ�� 
         	break;	
      	}
   	}
   
   	if(mode == -1 || temp == 0){
      	printf("-1");
   	}
   	else{
      	printf("%d",temp);
   	}

   	return 0;
}

 
