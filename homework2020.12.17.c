#define _CRT_SECURE_NO_WARNINGS
//输出菱形图案
//#include <stdio.h>
//#include <time.h>
//int main()
//{
//	int n = 10;  //行数
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	char arr[20] = { ' ' };
//	int length = 2 * n - 1;//*数
//	int left = (length )/ 2;
//	int right = (length) / 2;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = left; j <= right; j++)
//		{
//			arr[j] = '*';
//		}
//		for (m = 0; m < length; m++)
//		{
//			printf("%c", arr[m]);
//		}
//		
//		printf("\n");
//		left--;//=0
//		right++;//=12
//	}
//	left++;//上三角循环完之后arr里面全为13个*
//	right--;
//    for (i = 1; i < n; i++)
//	{
//		arr[left] = ' ';
//		arr[right] = ' ';
//		for (m = 0; m < length; m++)
//		{
//			printf("%c", arr[m]);
//		}
//		printf("\n");
//		left++;
//		right--;
//	}
//	return 0;
//}






//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 7;
//	int j = 0;
//	int k = 0;
//	char arr[13] = { ' ' };
//	int length = 2 * n - 1;
//	int left = (length) / 2;
//	int right = (length) / 2;
//	for (i = 0; i < n; i++)
//	{
//		for (j = left; j <= right; j++)
//		{
//			arr[j] = '*';
//		}
//		for (k = 0; k < length; k++)
//		{
//			printf("%c", arr[k]);
//		}
//		printf("\n");
//		left--;
//		right++;
//	}
	/*left++;
	right--;
	for (i = 0; i < n; i++)
	{
		arr[left] = ' ';
		arr[right] = ' ';
		for (k = 0; k < length; k++)
		{
			printf("%c", arr[k]);
		}
		printf("\n");
		left++;
		right--;
	}
	return 0;*/
//}





//打印水仙花数
//1.求出是几位数
//2.取出各位数字
//3.求次方
//4.相加
//#include <stdio.h>
//int num(int i)//1.求出是几位数	
//{
//	int n = 0;
//	while (i / 10 != 0)
//	{
//		i=i/10;
//		n++;
//	}
//	n++;
//	return n;
//}
//int fac(int x, int n)//求x的y次方
//{
//	int i = 0;
//	int S = 1;
//	for (i = 1; i <= n; i++)
//	{
//		S = x * S;
//	}
//	return S;
//}
//int Daffodils(int i)
//{
//	int sum = 0;
//	int n = num(i);
//	while (i / 10 != 0)
//	{
//		sum = sum + fac(i % 10, n);//求各位数字次方之和
//		i = i / 10;
//	}
//	sum = sum + fac(i, n);
//	return sum;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		if (Daffodils(i) == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}




//打印水仙花数
//#include <stdio.h>
//int fac(int x, int y)//求x的y次方
//{
//	int i = 0;
//	int S = 1;
//	for (i = 1; i <= y; i++)
//	{
//		S = x * S;
//	}
//	return S;
//}
//int SUM(int i,int j)
//{
//	while (i / 10 != 0)
//	{
//		i=i/10;
//		j++;
//	}
//	j++;
//	return j;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 0; i < 100000; i++)
//	{
//	    int a1=i % 10;//个位
//		int a2=(i / 10) % 10;//十位
//		int a3=(i / 100) % 10;//百位
//		int a4=(i / 1000) % 10;//千位
//		int a5=(i / 10000) % 10;//万位
//		n = SUM(i,count);
//		int Y1 = fac(a1, n);
//		int Y2 = fac(a2, n);
//		int Y3 = fac(a3, n);
//		int Y4 = fac(a4, n);
//		int Y5 = fac(a5, n);
//		int m = Y1 + Y2 + Y3 + Y4 + Y5;
//		if (m == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}



//求Sn=a+aa+aaa+aaaa+aaaaa的和，例如：2+22+222+2222+22222
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 0;
//	int ret = 2;
//	for (i = 1; i <= 1; i++)//22=2*10+2
//	{                       //222=2*10*10+22;
//		n = n + ret;
//		ret = ret * 10;
//		num = num + n;
//	}
//	printf("%d", num);
//	return 0;
//}





//写一个函数，逆序字符串的内容
//#include <stdio.h>
//void fac(char *p)
//{
//	if (*p != '\0')
//	{
//		 fac(p + 1);
//	}
//	printf("%c", *(p - 1));
//}
//int main()
//{
//	char m = 0;
//	char *ch = "abcdef";
//	fac(ch);
//	return 0;
//}




//写一个函数，打印数组arr的内容，使用指针，不使用数组下标
//#include <stdio.h>
//void fac(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", *(p + i));
//	}
//}
//int main()
//{
//	int arr[8] = { 1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fac(arr, sz);
//	return 0;
//}





//计算2的n次方--2^3=2*2*2
//#include <stdio.h>
//int main()
//{
//	int a = 2;
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	printf("请输入次方n的取值：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * 2;
//	}
//	printf("%d", ret);
//	return 0;
//}





//不创建临时变量，交换两个变量的值(用异或)
//#include <stdio.h>
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("交换前：\n");
//	printf("a=%d,b=%d\n",a,b);
//	int c = a ^ b;//110
//	/*printf("%d^%d=%d\n", a, b, c);*/
//	printf("交换后：\n");
//	printf("a=%d,b=%d\n", a^c, b^c);
//	return 0;
//}



//写函数交换两个变量的内容
//#include <stdio.h>
//void fac(int *p1, int *p2)
//{
//	int z= 0;
//	z = *p1;
//	*p1 = *p2;
//	*p2 = z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：\n");
//	printf("a=%d,b=%d\n",a,b);
//	fac(&a, &b);
//	printf("交换后：\n");
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}




//统计一个整数的二进制中1的个数
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int i = 0;
//	int count = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &x);
//	for (i = 0; i < 32; i++)
//	{
//		if (x>>i & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}





//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int i = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &m);
//	printf("%d的二进制表达：",m);
//	for (i = 31; i >= 0; i -= 1)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位：");
//	for (i = 30; i >= 0; i-=2)//1、3、5、7.....29、31
//	{
//		printf("%d",(m>>i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 31; i >=1; i -= 2)//2、4、6......30、32
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	return 0;
//}





//两个二进制整数中，有多少个二进制位不同
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int x = 0;
//	int num = 0;
//	printf("请输入两个整数：");
//	scanf("%d%d", &m, &n);
//	x = m ^ n;
//	printf("%d\n", x);
//	while (x != 0)
//	{
//		if (x % 2 == 1)
//		{
//			num++;
//			
//		}
//		x = x/2;
//	}
//	printf("%d", num);
//	return 0;
//}