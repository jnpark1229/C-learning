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

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int throwDice();
//
//void main()
//{
//	short int diceNum[10] = { 0, };
//	int i;
//	char dup = 'N';
//
//	printf("**주사위 2개 던지기 시작**\n\n");
//	srand((unsigned)time(NULL));
//
//	int dice1, dice2;
//	int equalCount = 0;
//	while (1) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//
//
//
//	}
//	printf("같은 숫자가 나온 순서==>");
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d  ", diceNum[i]);
//	}
//
//	printf("\n\n");
//}

//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//void main()
//{
//	char s[20];
//	FILE* rfp;
//
//	rfp = fopen("C:\\Temp\\data1.txt", "r");
//
//	fgets(s, 20, rfp);
//
//	printf("파일에서 읽은 문자열: ");
//	puts(s);
//
//	fclose(rfp);
//}
//
//#define _crt_secure_no_warnings	
//#include <stdio.h>
//
//int main()
//{
//	char str[200];
//	FILE* rfp;
//
//	rfp = fopen("C:\\windows\\win.ini", "r");
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
//
//	fclose(rfp);
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	FILE* rfp;
//	float sum = 0;
//	float in;
//	int i;
//
//	rfp = fopen("C:\\Temp\\data3.txt", "r");
//
//	for (i = 0;i < 5;i++)
//	{
//		fscanf(rfp, "%f", &in);
//		sum = sum + in;
//	}
//	printf("합계==>%7.2f\n", sum);
//
//	fclose(rfp);
//}

//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//
//int main()
//{
//	char s[20];
//	FILE* wfp;
//
//	wfp = fopen("C:\\Temp\\data4.txt", "w");
//
//	printf("문자열을 입력(최대 19자)");
//	gets_s(s);
//
//	fputs(s, wfp);
//
//	fclose(wfp);
//}


//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//
//int main()
//{
//	char str[200];
//	FILE* rfp;
//	FILE* wfp;
//
//	rfp = fopen("C:\\windows\\win.ini", "r");
//	wfp = fopen("C:\\Temp\\data5.txt", "w");
//
//	for (;;)
//	{
//		fgets(str, 200, rfp);
//
//		if (feof(rfp))
//			break;
//		fputs(str, wfp);
//	}
//	fclose(rfp);
//	fclose(wfp);
//}

//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//
//int main()
//{
//	FILE* wfp;
//	int sum = 0;
//	int in, i;
//	wfp = fopen("C:\\Temp\\data7.txt", "w");
//
//	for (i = 0;i < 5;i++)
//	{
//		printf("숫자 %d: ", i + 1);
//		scanf("%d", &in);
//		sum = sum + in;
//	}
//	fprintf(wfp, "합계==>:%d\n", sum);
//
//	fclose(wfp);
//}

//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//
//int main()
//{
//	FILE* wfp;
//	int i, k;
//
//	wfp = fopen("C:\\Temp\\gugu.txt", "w");
//	for (i = 2;i < 10;i++)
//	{
//		fprintf(wfp, "제 #%d단#", i);
//	}
//	fprintf(wfp, "\n\n");
//
//	for (i = 1;i < 10;i++)
//	{
//		for (k = 2;k < 10;k++)
//		{
//			fprintf(wfp, "%2d * %d =%2d   ", k, i, k * i);
//		}
//		fprintf(wfp, "\n");
//	}
//	fclose(wfp);
//}

//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	FILE* rfp, * wfp;
//	char str1[200], str2[200];
//	int size, i;
//
//	rfp = fopen("C:\\Temp\\in.txt", "r");
//	wfp = fopen("C:\\Temp\\out.txt", "w");
//
//	for (;;)
//	{
//		fgets(str1, 200, rfp);
//
//		if (feof(rfp))
//			break;
//
//		size = strlen(str1);//4 완보민재
//		for (i = size - 1;i >= 0;i--)//3~0
//			str2[size - (i + 1)] = str1[i - 1];
//
//		str2[size - 1] = '\0';
//		fputs(str2, wfp);
//		fputs("\n", wfp);
//	}
//	fclose(rfp);
//	fclose(wfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str[200];
//	FILE* rfp;
//	rfp = fopen("C:\\windows\\win.ini", "r");
//	int line = 1;
//	while (1)
//	{
//		fgets(str, 200, rfp);
//
//		if (feof(rfp))
//			break;
//
//		printf("%d : %s",line, str);
//		line++;
//	}
//	fclose(rfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int input[10];
//	int i;
//	int sum = 0;
//	int* p;
//
//	for (i = 0;i < 3;i++)
//	{
//		printf("%d번째 숫자: ", i + 1);
//		scanf("%d", &input[i]);
//	}
//
//	p = input;
//	
//
//	for (i = 0;i < 3;i++)
//	{
//		sum = sum + *(p + i);
//	}
//	printf("입력한 숫자의 합=>%d", sum);
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
int main()
{
	int* p;
	int i, hap = 0;
	int cnt;

	printf("입력할 개수는? : ");
	scanf("%d", &cnt);

	p = (int*)malloc(sizeof(int) * cnt);
	
	for (i = 0;i < cnt;i++)
	{
		printf("%d번째 숫자 : ", i + 1);
		scanf("%d", &p[i]);
	}

	for (i = 0;i < cnt;i++)
	{
		hap = hap + *(p + i);
	}

	printf("입력할 숫자의 합==>%d", hap);

	free(p);
}

