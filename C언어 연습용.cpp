//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a;
//	float b;
//	char ch;
//	char s[20];
//
//	printf("정수를 입력: ");
//	scanf("%d", &a);
//	printf("실수를 입력: ");
//	scanf("%f", &b);
//	printf("문자를 입력: ");
//	scanf(" %c", &ch);
//	printf("문자열을 입력: ");
//	scanf("%s", s);
//	printf("\n정수의 10진수==>%d\n", a);
//	printf("정수의 16진수==>%x\n", a);
//	printf("정수의 8진수==>%o\n", a);
//	printf("실수==>%10.3f\n", b);
//	printf("실수(공학용)==>%e\n", b);
//	printf("문자==>%c\n", ch);
//	printf("문자열==>%s\n", s);
//}
//
//
//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//
//void main()
//{
//	char s[20];
//
//	printf("문자열 입력:");
//	gets_s(s);
//
//	puts(s);
//}

//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
// 
//void main()
//{
//	char password[5] = "5678";
//	char input[5];
//	int i;
//
//	printf("비밀번호 4글자를 입력하세요 : ");
//	for (i = 0;i < 4;i++)
//		input[i] = _getch();
//	if (strncmp(password, input, 4) == 0)
//	{
//		printf("\n비밀번호 통과\n");
//	}
//	else
//	{
//		printf("\n입력한 비밀번호");
//
//		for (i = 0;i < 4;i++)
//			_putch(input[i]);
//
//			printf("가 틀렸음");
//
//	}
//}

//
//#include <stdio.h>
//#include <conio.h>
//void main()
//{
//	char ch;
//	ch = _getch();
//	_putch(ch);
//
//	ch = _getch();
//	_putch(ch);
//
//	ch = _getch();
//	_putch(ch);
//}

//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//
//void main()
//{
//	char password[5] = "5678";
//	char input[5];
//	int i;
//
//	printf("비밀번호 4글자를 입력하세요");
//	for (i = 0;i < 4;i++)
//	{
//		input[i] = _getch();
//	}
//	if (strncmp(password, input, 4) == 0)
//	{
//		printf("\n비밀번호 통과\n");
//	}
//	else
//	{
//		printf("\n입력한 비밀번호\n");
//		for (i = 0;i < 4;i++)
//		{
//			_putch(input[i]);
//
//			printf("가 틀렸음\n");
//		}
//	}
//}

//#include <stdio.h>
//#include <conio.h>
//
//void main()
//{
//	char ch;
//	ch = _getche();
//
//	ch = _getche();
//
//	ch = _getche();
//}

//
//#include <stdio.h>
//#include <conio.h>
// 
//void main()
//{
//	char ch;
//
//	printf("문자열을 입력하세요:");
//	ch = getchar();
//	putchar(ch);
//
//	ch = getchar();
//	putchar(ch);
//
//	ch = getchar();
//	putchar(ch);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	char s[20];
//	FILE* rfp;
//
//	rfp = fopen("c:\\temp\\data1.txt", "r");
//
//	fgets(s, 20, rfp);
//
//	printf("파일에서 읽은 문자열:");
//	puts(s);
//
//	fclose(rfp);
//}

//
//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//void main()
//{
//	char str[200];
//	FILE* rfp;
//
//	rfp = fopen("c:\\windows\\win.inin", "r");
//
//	for (;;)
//	{
//		fgets(str, 200, rfp);
//
//		if (feof(rfp))
//			break;
//
//		printf("%s", str);
//	}
//	fclose(rfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int upper_lower(char* p);
//
//void main()
//{
//	char in[100], out[100];
//
//	printf("문자열을 입력(100자 이내)");
//	scanf("%s", in);
//
//
//	strcpy(out, itoa(upper_lower(in)));
//
//	printf("대소문자 변환 결과==>%s\n", out);
//}
//
//int upper_lower(char*p1)//?
//{
//    char str[100], result[100];
//    int i;
//    int dif = 'a' - 'A';
//
//    for (i = 0; str[i] != '\0'; i++)
//    {
//        
//        if (str[i] >= 'a' && str[i] <= 'z') {
//            result[i] = str[i] - dif;
//        }
//       
//        else if (str[i] >= 'A' && str[i] <= 'Z') {
//            result[i] = str[i] + dif;
//        }
//       
//        else {
//            result[i] = str[i];
//        }
//    }
//    result[i] = '\0';
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int throwDice();

void main()
{
	short int diceNum[10] = { 0, };
	int i;
	char dup = 'N';

	printf("**주사위 2개 던지기 시작**\n\n");
	srand((unsigned)time(NULL));

	int dice1, dice2;
	int equalCount = 0;
	while (1) {
		dice1 = throwDice();
		dice2 = throwDice();



	}
	printf("같은 숫자가 나온 순서==>");
	for (i = 0;i < 10;i++)
	{
		printf("%d  ", diceNum[i]);
	}

	printf("\n\n");
}
















