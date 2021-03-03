#define _CRT_SECURE_NO_WARNINGS
//用非递归实现斐波那契数--1 1 2 3 5 8 13 21 34 55.....
//#include <stdio.h>
//int Fib(int m)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int sum = 1;
//	for(i = 3;i <= m;i++)
//	{
//		sum = a + b;
//		a = b;
//		b = sum;
//	}
//	return sum;
//}
//int main()
//{
//	int k = 0;
//	int ret = 0;
//	printf("请问想找到第几个斐波那契数？--->");
//	scanf("%d", &k);
//	ret = Fib(k);
//	printf("第%d个斐波那契数是：%d", k, ret);
//	return 0;
//}


//}//用递归实现斐波那契数--1 1 2 3 5 8 13 21 34 55.....
//#include <stdio.h>
//int Fib(int m)
//{
//	while (m > 2)
//		return Fib(m - 1) + Fib(m - 2);
//	return 1;
//}
//int main()
//{
//	int k = 0;
//	int ret = 0;
//	printf("请问想找到第几个斐波那契数？--->");
//	scanf("%d", &k);
//	ret = Fib(k);
//	printf("第%d个斐波那契数是：%d", k, ret);
//	return 0;
//}




//递归实现n的k次方
//#include <stdio.h>
////x的y次=x*x的（y-1）次
//int fac(int x, int y)
//{
//	while (y != 0)
//		return x * fac(x, y - 1);
//	return 1;
//}
//int main()
//{
//	printf("本程序用于实现n的k次方\n");
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	printf("请输入n：");
//	scanf("%d", &n);
//	printf("请输入k：");
//	scanf("%d", &k);
//	ret=fac(n, k);
//	printf("%d的%d次方=%d",n,k,ret);
//	return 0;
//}





//递归实现-一个整数的每位之和，例如：1234    -->10
//#include <stdio.h>
//int DigitSum(int m)
//{
//	//1234/10=123    4
//	//123/10=12  3   
//	//12/10=1 2  
//	//1/10=0,第五次m=0，直接返回0，前面的数字都已经取出
//	while (m != 0)
//		return (m % 10) + DigitSum(m / 10);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &x);
//	int sum = 0;
//	sum = DigitSum(x);
//	printf("%d的每位之和为：%d", x, sum);
//	return 0;
//}





//编写函数reverse_string(char *p)将字符串倒序输出，用递归方式实现
//#include <stdio.h>
//void reverse_string(char *p)
//{
//	if (*p != '\0')//\0字符串结束标志，从最后一个开始输出
//	{
//		 reverse_string(p + 1);
//	}
//	printf("%c", *(p-1));
//}
//int main()
//{
//	char *str = "abcdef";
//	reverse_string(str);
//	return 0;
//}

//非递归实现strlen
//#include <stdio.h>
//int my_strlen(char *p)//用指针接收地址
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);//数组名存放首元素地址
//	printf("%d", len);
//	return 0;
//}


//递归实现strlen
//#include<stdio.h>
//int my_strlen(char *p)//用指针接收地址
//{
//	if (*p != '\0')//'\0'是字符串的结束标志
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main()
//{
//	//char arr[] = "abcdef";
//	//int len = my_strlen(arr);//数组名存放首元素地址
//	char *arr = "abcdef";	//用指针存放首元素地址
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}





//递归求n!=n*(n-1)!=n*(n-1)*(n-2)!
//#include<stdio.h>
//int fac(int m)
//{
//	//while (m >= 1)
//	//{
//	//	return m * fac(m - 1);
//	//}
//	//return 1;//fac(0)=1;
//	if(m >= 1)
//		return m * fac(m - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入n的取值：");
//	scanf("%d", &n);
//	ret=fac(n);
//	printf("%d!=%d", n, ret);
//	return 0;
//}


//非递归实现求n!
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	printf("请输入n的取值：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d!=%d", n, ret);
//	return 0;
//}
//
//



//递归方式实现--打印一个数字的每一位，例如123
//#include <stdio.h>
//void fac(int m)
//{
//	if (m > 9)//如果是个位数直接输出就好
//	{
//		fac(m / 10);//123--12  3--1  2  3
//	}
//	printf("%d\t", m % 10);//每次取出最后一位
//	
//}
//
//int main()
//{
//	int x = 0;
//	printf("请输入数字：");
//	scanf("%d", &x);
//	fac(x);
//	return 0;
//}





//二分查找(折半查找)：定义一个数组，找到数组中某个数的位置
//找到元素7的位置
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//求出数组中最后一个元素的下标
//	int mid = (left + right) / 2;//找到中间元素下标
//	printf("数组为：\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("[%d]\t", arr[i]);
//	}
//	printf("请输入要查找的元素：");
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		if (arr[mid] > k)//中间元素比7大，说明7在中间元素的左边，在左区间
//		{
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//			
//
//		else if (arr[mid] < k)//中间元素比7小，说明7在中间元素的右边，在右区间
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else
//		{
//			printf("元素%d的下标为：%d", k, mid);
//			break;
//		}
//	}
//	
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	printf("%p\n", arr);
//	printf("%p\n", p);
//	printf("%p\n", arr+1);
//	printf("%p\n", p+1);
//	return 0;
//}






//猜数字游戏
//#include <stdio.h>
//产生一个随机数，如果输入数字和随机数相同，则猜对了
//void Top(void)
//{
//	printf("*******************************************\n");
//	printf("********1--开始游戏****0--退出游戏***********\n");
//	printf("*******************************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;//产生的随机数在1-100之间
//	int m = 0;
//	//while(1)永远为真，只有遇到break才可跳出，否则一直循环
//	while (1)//玩游戏
//	{
//		printf("请输入数字：");
//		scanf("%d", &m);
//		if (m > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (m < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了，游戏结束\n");
//			break;
//		}
//	} 
//}
////主函数
//int main()
//{
//	srand((unsigned int)time(NULL));//一次生成一组随机数，玩一次游戏，生成一次即可
//	int input = 0;
//	do
//	{
//		Top();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			printf("开始猜数字游戏\n");
//			game();
//		}
//		else if (input == 0)
//			printf("退出游戏\n");
//		else
//			printf("输入错误\n");
//	} while (input);//判断为真则继续循环，为假则结束循环（0为假，非0为真）
//	
//	return 0;
//}






//打印九九乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;	
//	int s = 0;
//	int x = 0;
//	printf("请输入x的取值：");
//	scanf("%d", &x);
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			s = j * i;
//			printf("%d*%d=%d\t", j, i, s);
//		}
//		printf("\n");
//	}
//	return 0;
//}





//求十个整数中的最大值
//#include <stdio.h>
//int main()
//{
//	int i = 0;//变量初始化
//	int a[10] = { 0 };//数组初始化:可以放10个整数的数组
//	int max = 0;
//	printf("请输入十个整数：");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	if (i = 10)
//		printf("输入结束，开始比较！！！\n");
//	max = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("最大的数是：%d", max);
//	return 0;
//}





//计算1/1 - 1/2 + 1/3 +......- 1/100的结果
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		//进行除法操作时，至少有一个为小数，则输出为小数
//		if (i % 2 == 0)
//			sum = sum - (1.0 / i);
//		else
//			sum = sum + (1.0 / i);
//	}
//	printf("%f", sum);
//	return 0;
//}





//编写程序数出1-100中所有整数中出现9的次数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 98; i < 100; i++)
//	{
//		if (i / 10 == 9)//取出十位数字
//			count++;
//		if (i % 10 == 9)//取出个位数字
//			count++;		
//	}
//	printf("%d", count);
//	return 0;
//}





//打印100到200之间的素数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;//起点
//	int n = 0;//终点
//	printf("请输入起点：");
//	scanf("%d", &m);
//	printf("请输入终点：");
//	scanf("%d", &n);
//	for (i = m; i <= n; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;	
//		}
//		//只有当前面的循环可以全部正常结束，才可判断是素数，此时j=i
//		if (j ==i)//程序的出口
//		{
//			printf("输入的两个数之间的素数为：%d\n", i);
//		}
//	}
//	return 0;
//}





//判断输入的年份是不是闰年
//#include <stdio.h>
//int Year(int m)//自定义的判断年份函数
//{
//	if (m % 400 == 0)
//		printf("%d是闰年\n", m);
//	else if ((m % 4 == 0) && (m % 100 != 0))
//		printf("%d是闰年\n", m);
//	else
//		printf("%d不是闰年\n", m);
//}
//int main()
//{
//	int x = 0;
//	printf("请输入需要判断的年份：");
//	scanf("%d", &x);
//	Year(x);
//	return 0;
//}





//打印1000年到2000年之间的闰年
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ( i % 400 == 0 )
//			printf("1000到2000之间的闰年有：%d\n",i);
//		else if ( (i % 4 == 0) && (i % 100 != 0) )
//			printf("1000到2000之间的闰年有：%d\n", i);
//	}
//	return 0;
//}