// �迭 �������� 8(p292)
//#include <stdio.h>
//
//int main()
//{
//	int ary[2][3];
//	int i, k;
//	int num = 10;
//	for (i = 0;i < 2;i++)
//	{
//		for (k = 0;k < 3;k++)
//			ary[i][k] = --num;
//	}
//	for (i = 0;i < 2;i++)
//	{
//		for (k = 0;k < 3;k++) {
//			printf("%3d", ary[i][k]);
//		}
//		printf("\n");
//	}
//}

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	char in[100],out[100];
	char before, after;
	int i,count;

	printf("���� ���ڸ� �Է�:");
	scanf("%s", in);//abcd

	count = strlen(in);//4

	printf("���� ���ڿ� ���ο� ���ڸ� �Է��ϼ���:");//a &
	scanf(" %c %c", &before, &after);//befor=a,after=&

	for (i = 0;i <= count;i++)
	{
		if (in[i] == before)
			in[i] = after;
		out[i] = in[count - (i+1)];
	}
	out[count] = '\0';

	printf("��ȯ�� ���==>%s\n", out);
}
