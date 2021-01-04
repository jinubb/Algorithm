#include<stdio.h>
#include<string.h>
int main(void){
    int a[9],b[9];
    int i,j,m,n;
    int c[10]={0,1,2,3,4,5,6,7,8,9}; // a가 모두 0일경우 1루수 판단용 
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
        if(a[i]==0){  // i번째 선수가 거짓일경우 
            a[i]=1;
    	}
     	else{
         	a[i]=0;
      	}
        for(j=0;j<9;j++){
    	    if(a[j]==1){
//            printf("확인");
           		if(k==-1){ // k가 초기화되어있으면 
               		k = b[j]; // k는 2루수  
               		mode2 = 1; //
            	}
            	else if(b[j]==k){  // 같은 1루수를 지정할경우 
//            		printf("걸림");
            		continue;  
            	}
            	else{  // k가 초기화되지 않았다면 
               		mode2 = 0;
               		break;  // 1루수가 2명일수는 없기때문에 
            	}
         	}
         	else{
         		cnt4++;
			}
      	} 
//      	printf("%d",cnt4);
      	if(cnt4==9){ // a[0] ~ a[8]이 모두 0인경우 
//      	printf("확인");
      		for(n=0;n<9;n++){
      			c[b[n]]=0;
			}
			for(m=1;m<=9;m++){
				if(c[m]!=0){
//					printf("확인2");
					cnt3++;
					temp2 = c[m];
				}
        		if(cnt3 == 1){   // 한명의 등번호만을 남긴경우 
//        			printf("확인3");
//         			mode2 = 1;
         			temp = temp2;
//         			printf("%d",temp);
         			cnt++;
         		}
      		}
     	}
   
      	if (mode2 == 1){
//         	printf("temp값변경");
         	temp = k ; // 1루수가 정해지는경우(참) 
         	cnt++; 
      	}
      
      	if (cnt >= 2){  // 1루수가 참이되는경우가 2가지 이상일경우 -1을 출력해야함  
         	mode = -1;
         	break;
      	}
      
      	if(mode == 1){  //뒤에까지 봐야되는경우 
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
      	else{  //뒤는 무시가 가능한경우 
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

 
