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
	int i = 0;
	int result = 0;

	printf("계산할 식과 계산 값을 입력하세요");
	scanf("%s", input);

	equal_left = strtok(input, "=");//문자열을 구분자를 기준으로 자르고 첫 번째 조각(토큰)의 시작 주소를 반환합니다.
	//원본 문자열이 직접 변경됨 → 구분자(= )가 '\0'(널 문자)로 바뀜.
	equal_right = strtok(NULL, "=");//str에 NULL을 넣으면, 이전 호출에서 잘린 다음 조각(토큰)의 시작 주소를 반환함
	// strtok()는 어디까지 잘랐는지 기억하고 있음.

	char* plus = strchr(input, '+');
	char* minus = strchr(input, '-');

	if (minus != NULL)
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
		printf("응 틀렸어~ 정답은 %d이야.", result);
	else
		printf("숫자를 입력하세요");
}


#include <stdio.h>

int main()
{
	char s[40] = "ITCookBookHanbitNetWork";
	char* p = s;
	int i;
	printf("정렬 전 문자열==>%p", p);

	for (i = 0;*(p + i) != '\0';i++)
	{

	}

}//p326




//p26 문제2
// 배열에 1~100 대입, 포인터 활용--> 이 배열을 51~100, 100 초과면 1~49출력, 50이 되면 출력하지 않고 종료
#include <stdio.h>
int main()
{
	char arr[100];
	char* p;
	int i;
	p = arr;

	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}

	for (i = 0;i < 150;i++)
	{
		if (i < 50)
		{
			printf("%d\t", *(p + i + 50));
		}
		else if (i >= 50 && i < 99)
		{
			if (i == 50)
				printf("\n\n");
			printf("%d\t", *(p + i - 50));
		}
		else {
			break;
		}
	}
}


