//#define _CRT_SECURE_NO_WARNINGS
//�������������е����� 
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
//void fac(int arr2[], int brr2[],int sz)//�����������������
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)//ÿ�ν���һ��Ԫ��
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
//	printf("����ǰ:\n");
//	print(arr1, sz);
//	print(brr1, sz);
//	fac(arr1, brr1,sz);
//	printf("������:\n");
//	print(arr1, sz);
//	print(brr1, sz);
//	return 0;
//}





//��������init()��ʼ������ȫΪ0��
//��������print()��ӡ�����ÿ��Ԫ�أ�
//��������reverse()ʵ�����������(�ݹ�)��
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




////ʵ�����������ð���������ڵ����������бȽ�
//#include <stdio.h>
//void fac(int *p,int sz)//��ָ����յ�ַ
//{
//	int i = 0;
//	int j = 0;
//	int *p1 = p;//ָ��p1���p�ĵ�ַ����һ��Ԫ�ص�ַΪp��
//	for (i = 0; i < sz - 1; i++)//n��Ԫ����Ҫn-1��
//	{
//		p = p1;//�ڶ��ֿ�ʼ�������ӵ�һ��Ԫ�ؿ�ʼ�Ƚ�
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
//	fac(arr,sz);//������Ϊ��Ԫ�ص�ַ
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}