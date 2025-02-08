//#define _CRT_SECURE_NO_WARNIGNS	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char string[] = "i like apple";
//	char* p=string;
//	
//	p = strtok(string, " ");
//	while (p)
//	{
//		printf("%s\n", p);
//		p = strtok(NULL, " ");
//	}
//	return 0;
//}



//문제 2
//#define _CRT_SECURE_NO_WARNIGNS	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[10];
//	char* p = input;
//	int data[10];
//	int i=0;
//	printf("입력하세요:");
//	scanf("%s", input);
//
//	p = strtok(input, "-");
//	while (p)
//	{
//		data[i++] = atoi(p);
//		p = strtok(NULL, "-");
//	}
//	int result = data[0] - data[1];
//	printf("%d", result);
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	
#include <string.h>
int main()
{
	char input[100];//5-3=2
	int cal_num[2];
	char* equal_left, * equal_right;
	char* p;
	int i=0;
	int result=0;
	
	printf("계산할 식과 계산 값을 입력하세요");
	scanf("%s", input);

	equal_left = strtok(input, "=");//포인터가 가리키는 위치는 0번째, =을 만나기 직전까지 저장
	equal_right = strtok(NULL, "=");//포인터가 가리키는 위치는 =을 만난 직후,NULL을 만나기 직전까지 저장

	char* plus = strchr(input, '+');
	char* minus = strchr(input, '-');

	if (minus!=NULL)
	{
		p = strtok(equal_left, "-");
		while (p != NULL)
		{
			cal_num[i++] = atoi(p);//5,3,2
			p = strtok(NULL, "-");
		}
		 result = cal_num[0] - cal_num[1];
	}
	if (plus != NULL)
	{
		p = strtok(equal_left, "+");
		while (p != NULL)
		{
			cal_num[i++] = atoi(p);
			p = strtok(NULL, "+");
		}
		result = cal_num[0] + cal_num[1];
	}

	if (result == atoi(equal_right))
		printf("참입니다.");
	else if (result != atoi(equal_right))
		printf("%s는 %d입니다.", input, result);
	else
		printf("숫자를 입력하세요");
}







//
//#include <stdio.h>
//void main()
//{
//	char inStr[100], outStr[100];
//
//	printf("문자열을 입력(100자 이내)");
//
//}