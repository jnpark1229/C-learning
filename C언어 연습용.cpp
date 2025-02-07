//1
//#include <stdio.h>
//
//int main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b=%d\n", b);//100
//	printf("b=%x\n", &b);//b의 주소 16진수로 출력
//	printf("b=%x\n", pB);//b의 주소 16진수로 출력
//}


//2
//#include <stdio.h>
//
//int main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기:%d byte\n", sizeof(pA));//포인터의 크기
//	printf("pB의 크기:%d byte\n", sizeof(pB));
//	printf("pC의 크기:%d byte\n", sizeof(pC));
//
//	printf("pA의 크기:%d byte\n", sizeof(*pA));//포인터가 가리키는 변수의 크기
//	printf("pB의 크기:%d byte\n", sizeof(*pB));
//	printf("pC의 크기:%d byte\n", sizeof(*pC));
//}


//3
//#include <stdio.h>
//
//int main()
//{
//	char str[] = "programing";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d입니다.\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", *ptr1 + 1);
//	printf("%c\n", *(ptr1 + 3));
//}

//4
//#include <stdio.h>
//int main()
//
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}

//5
//#include <stdio.h>
//int main()
//{
//	int number[2] = { 1,2 };
//	int* p = number;
//
//	printf("%d\n", *p);
//}


//6
//#include <stdio.h>
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];//5
//	int* ptrFibo4 = fibonacci + 4;//21
//	printf(">%d-%d", *ptrFibo4, *ptrFibo1);
//	printf(">>%d\n", *ptrFibo4 - *ptrFibo1);
//
//	printf("%d\n", ptrFibo[1]);
//	printf("%d\n", ptrFibo[0]);
//	printf("%d", ptrFibo[-1]);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numptrA;
//	int* ptr;
//
//	numptrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n",*(numptrA-1) );//numptrA를 사용-->22출력
//	printf("%d\n",*(ptr+4) );//ptr 사용-->55출력
//}

//포인터 ++활용
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d", *p++);//<<<<<------------중요!!!!!!!!
//	}
//	return 0;
//}

//행렬 활용 예제(맛있음)
//#include <stdio.h>
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i = 0;i < 6;i++)
//	{
//		printf("%d", *p++); //arr[0][0] = 1, arr[0][1] = 2, arr[0][2] = 3, arr[1][0] = 4, arr[1][1] = 5, arr[1][2] = 6
//		//행 우선 방식으로 저장됨(가로 줄 하나 끝나면 다음 가로 줄로 내려감)
//	}
//	return 0;
//}

//[포인터와 ++ 활용 예제(맛있음)
//#include <stdio.h>
//
//int main() {
//    int num[4] = { 1, 2, 3, 4 };  // 정수형 배열 선언 및 초기화
//    int* pt = num;  // 배열 num의 첫 번째 요소(주소)를 가리키는 포인터 pt 선언
//    pt++;           // 포인터를 한 칸 이동 (num[1]을 가리킴)
//    *pt++ = 5;      // 현재 위치(num[1])에 5를 저장하고, 포인터를 한 칸 이동 (num[2]를 가리킴)
//    *pt++ = 10;     // 현재 위치(num[2])에 10을 저장하고, 포인터를 한 칸 이동 (num[3]을 가리킴)
//
//    pt--;           // 포인터를 한 칸 뒤로 이동 (num[2]를 가리킴)
//    *pt++ = 20;     // 현재 위치(num[2])에 20을 저장하고, 포인터를 한 칸 이동 (num[3]을 가리킴)
//
//    // 배열 출력
//    for (int i = 0; i < 4; i++) {
//        printf("%d\t", num[i]);
//    }
//    printf("\n");
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "memmove can be very useful.....";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//struct mydata
//{
//	int a;
//	char b[25];
//};
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d-%s\n", data.a, data.b);
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* str1 = (char*)"coding";
//	char* str2 = (char*)"coding";
//	char* str3 = (char*)"coding";
//	char* str4 = (char*)"coding";
//	char* str5 = (char*)"coding";
//
//	printf("%s with %s = %d\n", str1, str2,
//		memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s(str1 size) = %d\n", str1, str3,
//		memcmp(str1, str3, strlen(str1)));
//	printf("%s with %s(str2 size)=%d\n", str1, str3,
//		memcmp(str1, str3, strlen(str3)));
//
//	printf("%s with %s=%d\n", str1, str4,
//		memcmp(str1, str4, strlen(str1)));
//
//	printf("%s with %s (str1 size)=%d\n", str1, str5,
//		memcmp(str1, str5, strlen(str1)));
//	printf("%s with %s (str5 size)=%d\n", str1, str5,
//		memcmp(str1, str5, strlen(str5)));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int src_data[10] = { 0,1,2,3,4,5 };
//	int dst_data[10] = { 10,20,30,40,50 };
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2],
//		src_data[3], src_data[4]);
//
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], 
//		dst_data[3], dst_data[4]);
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[10];
//
//	scanf("%s", str);
//	printf("입력한 문자열:%s\n", str);
//	printf("문자열의 길이: %d\n", strlen(str));
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	printf("Looking for the 's' character in\"%s\"...\n", str);
//	pch = strchr(str, 's');//문자 찾기 앞쪽
//
//	while (pch != NULL)
//	{
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//
//	printf("%s\n", str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>	
//
//int main()
//{
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//
//	printf("s1[%-7s],s2[%-7s]=>ret=[%2d]\n", str1, str2, strcmp(str1, str2));
//	printf("s2[%-7s],s3[%-7s]=>ret=[%2d]\n", str2, str3, strcmp(str2, str3));
//	printf("s3[%-7s],s1[%-7s]=>ret=[%2d]\n", str3, str1, strcmp(str3, str1));
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buf[25];
//
//	strcpy(buf, "hello world");
//	printf("%s\n", buf);
//	strncpy(buf, "hello world", 5);//앞 5글자만 복사-->'hello'만 출력됨
//	buf[5] = '\0';
//	printf("%s\n", buf);
//}