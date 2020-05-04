#include <stdio.h>

#include <time.h>



void main(){

    int j=1;

    clock_t start=clock();


    
    while(j){

       

        if((clock()-start)/CLOCKS_PER_SEC > 2.0)//0.3초가량 빠름 
        	break;
        	
        printf("yeah");
        sleep(1);

        

    }

}
