//����5
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
// char alphabet='A';
// while (alphabet <= 'Z')
// {
// if (alphabet == 'F')
// alphabet++;
//
// printf("%c", alphabet);
// alphabet++;
// }
//}

//���� 6
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
// int input;
// int number = 0;
//
// while (number <= 31)
// {
// printf("A:");
// scanf("%d", &input);
// number = input + number;
// printf("==>%d\n", number);
// if ((input >= 31)||(number>=31))
// {
// printf("B�� �̰���ϴ�!");
// break;
// }
//
// printf("B:");
// scanf("%d", &input);
// number = input + number;
// printf("==>%d\n", number);
// if ((input >= 31) || (number >= 31))
// {
// printf("A�� �̰���ϴ�!");
// break;
// }
// }
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
// int select;
// do
// {
// printf("\n�޴��� �����ϼ���.\n");
// printf("1.�α���\n2.ȸ������\n3.�ɼ�\n4.���� �����\n");
// scanf("%d", &select);
// } while ((select < 1) || (select > 4));
//}
//

//do-while�� ����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
// int input;
// enum{GAMEOVER,NEWGAME,LOADGAME,OPTION};
// do {
// printf("\n�� ������ �����ϼ���.\n");
// printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�(0:���� ����)\n");
// scanf("%d", &input);
//
// switch (input) {
// case NEWGAME:
// printf("�� ���� ����\n");
// break;
// case LOADGAME:
// printf("���̺� ������ �ε�\n");
// break;
// case OPTION:
// printf("�ɼ� ����\n");
// break;
// }
// } while (input != GAMEOVER);
//
// printf("������ �����մϴ�.\n");
//}

//���� 5
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
// int select;
// do {
// printf("1.�α��� 2.ȸ������ 3.�ɼ� 4.���� �����");
// scanf("%d", &select);
// } while ((select >= 1) && (select<= 4));
//}

//for��, ���� 1
//#include <stdio.h>
//int main()
//{
// int sheep;
// for (sheep = 1; sheep <= 5; sheep++) {
// printf("�� %d����\n", sheep);
// }
// printf("������!\n");
//}

//���� 2
//#include <stdio.h>
//int main()
//{
// int sheep;
// for (sheep = 1; sheep <= 50; sheep++)
// {
// if (sheep % 10 == 0)
// {
// printf("���� ���Ҵ�\n");
// continue;
// }
//      else if(sheep==45)
// break;
// printf("�� %d����\n", sheep);
// }
// printf("������!\n");
//}




//����1
//#include <stdio.h>
//int main()
//{
// int number;
// for (number = 10; number < 100; number++)
// printf("%d\n", number);
//}

//����2
//#include <stdio.h>
//int main()
//{
// int number,next_number=1;
// for (number = 3; number < 9; number++)
// {
// next_number = next_number * number;
// }
// printf("%d", next_number);
//}

//����3
//#include <stdio.h>
//int main()
//{
// int number;
// for (number = 1; number < 51; number++)
// {
// if ((number >= 30) && (number < 40))
// printf("%d�� ��ĥ �� �ڼ��� �ľ��մϴ�.\n", number);
// else if ((number%10%3==0)&&(number%10!=0))
// printf("%d�� ��ĥ �� �ڼ��� �ľ��մϴ�.\n", number);
// }
//}

//#include <stdio.h>
//int main()
//{
// int number;
//  
// for (number = 0; number < 200; number++)
// {
// if ((number % 11 == 0) && (number >= 11))
// {
// printf("%d\n", number);
// }
// }
//}

//#include <stdio.h>
//int main()
//{
// float sqLine;
// for (sqLine = 0.1; sqLine < 6; sqLine += 0.1)
// if (sqLine * 4 <= 21)
// printf("%3.1f\n", sqLine);
//}

//#include <stdio.h>
//int main()
//{
// int dan, sero;
// for (sero = 1; sero <= 9; sero++)
// {
// for (dan = 2; dan <= 9; dan++)
// {
// printf("%2d*%d=%2d", dan, sero, dan * sero);
// }
// printf("\n");
// }
//}

//#include <stdio.h>
//int main()
//{
// int dan, sero;
// for (sero = 1; sero <= 9; sero++)
// {
// for (dan = 2; dan <= 9; dan++)
// {
// if (dan == 3)
// continue;
// printf("%2d*%d=%2d", dan, sero, dan * sero);
// }
// printf("\n");
// }
//}

#include <stdio.h>
int main()
{
	int four, six;
	for (six = 1; six <= 6;six++)
	{
		for (four = 1; four <= 4; four++)
		{
			printf("4��-%d\t", four);
			printf("6��-%d\n", six);
		}
	}
}