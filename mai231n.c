#include<stdio.h>
#include<windows.h>
#define m num / 60
#define s num % 60
#define clear system("cls"); //화면상 모든것을 지움



void gotoxy(int x, int y)
{
      COORD pos = { x,y };
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



int main(void)
{
       int num, beep, re;
       printf("타이머 프로그램입니다.\n");
       do
       {
              printf("초를 입력해주세요: ");
              scanf_s("%d", &num);
              clear

              for (num = num; num > 0; num--)
              {
                     gotoxy(34, 12);
                     printf("%d분",m);
                     gotoxy(40, 12);
                     printf("%d초",s);
                     Sleep(1000);
               }

              for (beep = 3; beep > 0; beep--)
              {
              printf("\a\n"); //비프음 출력
              }
              printf("다시 사용하시겠습니까? Yes=1\n");
              scanf_s("%d", &re);
              clear
        } while (re == 1);
        return 0;
}


