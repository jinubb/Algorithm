#include<stdio.h>
#include<windows.h>
#define m num / 60
#define s num % 60
#define clear system("cls"); //ȭ��� ������ ����



void gotoxy(int x, int y)
{
      COORD pos = { x,y };
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



int main(void)
{
       int num, beep, re;
       printf("Ÿ�̸� ���α׷��Դϴ�.\n");
       do
       {
              printf("�ʸ� �Է����ּ���: ");
              scanf_s("%d", &num);
              clear

              for (num = num; num > 0; num--)
              {
                     gotoxy(34, 12);
                     printf("%d��",m);
                     gotoxy(40, 12);
                     printf("%d��",s);
                     Sleep(1000);
               }

              for (beep = 3; beep > 0; beep--)
              {
              printf("\a\n"); //������ ���
              }
              printf("�ٽ� ����Ͻðڽ��ϱ�? Yes=1\n");
              scanf_s("%d", &re);
              clear
        } while (re == 1);
        return 0;
}


