//문제5
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

//문제 6
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
// printf("B가 이겼습니다!");
// break;
// }
//
// printf("B:");
// scanf("%d", &input);
// number = input + number;
// printf("==>%d\n", number);
// if ((input >= 31) || (number >= 31))
// {
// printf("A가 이겼습니다!");
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
// printf("\n메뉴를 선택하세요.\n");
// printf("1.로그인\n2.회원가입\n3.옵션\n4.만든 사람들\n");
// scanf("%d", &select);
// } while ((select < 1) || (select > 4));
//}
//

//do-while문 예제
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
// int input;
// enum{GAMEOVER,NEWGAME,LOADGAME,OPTION};
// do {
// printf("\n새 게임을 선택하세요.\n");
// printf("1.새 게임 2.이어하기 3.옵션(0:게임 종료)\n");
// scanf("%d", &input);
//
// switch (input) {
// case NEWGAME:
// printf("새 게임 시작\n");
// break;
// case LOADGAME:
// printf("세이브 데이터 로드\n");
// break;
// case OPTION:
// printf("옵션 세팅\n");
// break;
// }
// } while (input != GAMEOVER);
//
// printf("게임을 종료합니다.\n");
//}

//문제 5
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
// int select;
// do {
// printf("1.로그인 2.회원가입 3.옵션 4.만든 사람들");
// scanf("%d", &select);
// } while ((select >= 1) && (select<= 4));
//}

//for문, 문제 1
//#include <stdio.h>
//int main()
//{
// int sheep;
// for (sheep = 1; sheep <= 5; sheep++) {
// printf("양 %d마리\n", sheep);
// }
// printf("잠들었다!\n");
//}

//문제 2
//#include <stdio.h>
//int main()
//{
// int sheep;
// for (sheep = 1; sheep <= 50; sheep++)
// {
// if (sheep % 10 == 0)
// {
// printf("깜빡 졸았다\n");
// continue;
// }
//      else if(sheep==45)
// break;
// printf("양 %d마리\n", sheep);
// }
// printf("잠들었다!\n");
//}




//문제1
//#include <stdio.h>
//int main()
//{
// int number;
// for (number = 10; number < 100; number++)
// printf("%d\n", number);
//}

//문제2
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

//문제3
//#include <stdio.h>
//int main()
//{
// int number;
// for (number = 1; number < 51; number++)
// {
// if ((number >= 30) && (number < 40))
// printf("%d를 외칠 때 박수를 쳐야합니다.\n", number);
// else if ((number%10%3==0)&&(number%10!=0))
// printf("%d를 외칠 때 박수를 쳐야합니다.\n", number);
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
			printf("4면-%d\t", four);
			printf("6면-%d\n", six);
		}
	}
}