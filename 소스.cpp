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



//���� 2
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
//	printf("�Է��ϼ���:");
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
	
	printf("����� �İ� ��� ���� �Է��ϼ���");
	scanf("%s", input);

	equal_left = strtok(input, "=");//�����Ͱ� ����Ű�� ��ġ�� 0��°, =�� ������ �������� ����
	equal_right = strtok(NULL, "=");//�����Ͱ� ����Ű�� ��ġ�� =�� ���� ����,NULL�� ������ �������� ����

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
		printf("���Դϴ�.");
	else if (result != atoi(equal_right))
		printf("%s�� %d�Դϴ�.", input, result);
	else
		printf("���ڸ� �Է��ϼ���");
}







//
//#include <stdio.h>
//void main()
//{
//	char inStr[100], outStr[100];
//
//	printf("���ڿ��� �Է�(100�� �̳�)");
//
//}