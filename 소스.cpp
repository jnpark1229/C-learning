//#include <stdio.h>
//#include <string.h>
////���ڰ� �Ųٷ� ���, ���� ��ҹ��� ��ȯ, ary ��� ���� , p�� ���
//int main()
//{
//	char ary[25] = "IT 1234 @$% CookBook";//20��
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';//��Һ�ȯ
//
//
//	p = ary + strlen(ary)-1;//0~19
//	for (;p>=ary ; p--)//p>=0���� �ݺ�
//	{
//		if (*p >= 'A' && *p <= 'Z')
//			printf("%c", *p + diff);
//		else if (*p >= 'a' && *p <= 'z')
//			printf("%c", *p - diff);
//		else
//			printf("%c", *p);
//
//	}
//
//	//for (; ; p--)//���ѷ���
	//{
	//	if (*p >= 'A' && *p <= 'Z')
//	//		printf("%c", *p + diff);
//	//	else if (*p >= 'a' && *p <= 'z')
//	//		printf("%c", *p - diff);
//	//	else
//	//		printf("%c", *p);
//	//	if (p == ary)
//	//		break;
//	//}
//
//
//}

//1��
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;
//
//	*ptr = arr[2];
//	printf("%d", *ptr);
//}

//2�� 1)
//#include <stdio.h>
//int main()
//{
//	int arr[100];
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i+1;
//		printf("%d\n", arr[i]);
//	}
//}

//2�� 3),4)
//#include <stdio.h>
//int main()
//{
//	int arr[100];
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	for (i = 99; i >= 0; i--)
//	{
//		printf("%d\n", arr[i]);
//	}
//} 

//2�� 5)
//#include <stdio.h>
//int main()
//{
//	int arr[100];
//	int i;
//	int* p;
//	p = arr;
//   
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", *(p+i));
//	}
//}

//����2
#include <stdio.h>
int main()
{
	int arr[100];
	int i;
	int* p;
	p = arr;

	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}

	for (i = 50; i < 100; i++)
	{
		printf("%d\n", (*p + i));
		
		if()
	}
	

}











































