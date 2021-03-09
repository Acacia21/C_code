//#define _CRT_SECURE_NO_WARNINGS
//交换两个数组中的内容 
//#include <stdio.h>
//void print(int rr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", rr[i]);
//	}
//	printf("\n\n");
//}
//void fac(int arr2[], int brr2[],int sz)//交换两个数组的内容
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)//每次交换一个元素
//	{
//		ret = arr2[i];
//		arr2[i] = brr2[i];
//		brr2[i] = ret;
//	}
//}
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int brr1[5] = { 11,12,13,14,15 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("交换前:\n");
//	print(arr1, sz);
//	print(brr1, sz);
//	fac(arr1, brr1,sz);
//	printf("交换后:\n");
//	print(arr1, sz);
//	print(brr1, sz);
//	return 0;
//}





//创建函数init()初始化数组全为0；
//创建函数print()打印数组的每个元素；
//创建函数reverse()实现数组的逆序(递归)；
//#include <stdio.h>
//void print(int brr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", brr[i]);
//	}
//	printf("\n\n");
//}
//void init(int brr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		brr[i] = 0;
//	}
//}
//void reverse(int brr[],int sz)
//{
//	int i = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d\t", brr[i]);
//	}
//	printf("\n\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	reverse(arr, sz);
//	init(arr,sz);
//	print(arr,sz);
//	return 0;
//}




////实现整形数组的冒泡排序：相邻的两个数进行比较
//#include <stdio.h>
//void fac(int *p,int sz)//用指针接收地址
//{
//	int i = 0;
//	int j = 0;
//	int *p1 = p;//指针p1存放p的地址（第一个元素地址为p）
//	for (i = 0; i < sz - 1; i++)//n个元素需要n-1趟
//	{
//		p = p1;//第二轮开始，继续从第一个元素开始比较
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*p > *(p + 1))
//			{
//				int s = *p;
//				*p = *(p + 1);
//				*(p + 1) = s;
//			}
//			p++;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int sz = 0;
//	int arr[5] = { 5,4,3,2,1 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	fac(arr,sz);//数组名为首元素地址
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}