//#include <stdio.h>//오름차순
//
//void main()
//{
//    int arr[4] = { 4,3,2,1 };
//	int i,k,temp;          
//
//    for (i = 0; i < 3; i++) //0 1 2
//    {
//        for (k = 0; k< 3 - i; k++) //0 1 2 // 0 1 // 0
//        {
//            if (arr[k] > arr[k + 1]) //3412 3142 3124// 1324 1234//
//            {
//                temp = arr[k];
//                arr[k] = arr[k + 1];
//                arr[k + 1] = temp;
//            }
//        }
//    }
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main()
//{
//    int arr[4];
//    int i, k, temp;           //2431-->1234
//
//    for (i = 0; i < 4; i++)
//    {
//        printf("배열의 %d번째 내용을 입력하세요", i + 1);
//        scanf("%d", &arr[i]);
//    }
//       
//
//    for (i = 0; i < 3; i++) //0 1 2
//    {
//        for (k = 0; k< 3 - i; k++) //0 1 2 // 0 1 // 0
//        {
//            if (arr[k] > arr[k + 1]) //3412 3142 3124// 1324 1234//
//            {
//                temp = arr[k];
//                arr[k] = arr[k + 1];
//                arr[k + 1] = temp;
//            }
//        }
//    }
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//	if (one > two)
//	{
//		if (one > three)
//			max = one;
//		else
//			max = three;
//	}
//	else {
//		if (two > three)
//			max = two;
//		else
//			max = three;
//	}
//	printf("max=%d\n", max);
//}

//#include <stdio.h>
//
//void main()
//{
//	int a[3] = { 1,3,2 };
//	int max = a[0];
//	for (int i = 1;i < 3;i++)
//		if (max < a[i])
//			max = a[i];
//	printf("max=%d\n", max);
//}

//#include <stdio.h>
//
//int main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	
//	int count[7] = { 0 };//0123456(7개)
//	int i;
//
//
//	for (i = 0;i < 10;i++)//012345
//	{
//		int num = a[i];
//		count[num]++;
//	}
//
//	for (i = 1;i < 7;i++)
//	{
//		printf("%d이(가) 나온 횟수 %d\n", i, count[i]);
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };//0~9까지 쓸면서 if문으로 cnt[변수]++해야될듯
//
//	int cnt[7] = { 0 };
//	int i, k;
//
//	for (i = 0;i < 7;i++)//주사위 눈
//	{
//		for (k = 0;k < 10;k++)//(i,k) (0,1) (0,1) (0,4) ... (1,1)[if문 내부 실행], (1,1)[if문 내부 실행], (1,4).....
//		{
//			if (i == a[k])
//				cnt[i]++;
//		}
//	}
//
//	for (i = 1; i <= 6; i++) {
//		printf("%d이(가) 나온 횟수: %d\n", i, cnt[i]);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	char arr[2][3] = { '1','2','3','4','5','6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//
//	#include <stdio.h>
//	int main()
//	{
//		int arr2d[5][4] = {
//			{62,7,4,74},
//			{8,25,49,35},
//			{66,73,86,0},
//			{11,26,58,42},
//			{84,7,41,11}
//		};
//
//		for (int i = 0;i < 5;i++)
//		{
//			for (int k = 0;k < 4;k++)
//			{
//				printf("%3d", arr2d[i][k]);
//			}
//			printf("\n");
//		}
//}