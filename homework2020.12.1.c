#define _CRT_SECURE_NO_WARNINGS
//�÷ǵݹ�ʵ��쳲�������--1 1 2 3 5 8 13 21 34 55.....
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
//	printf("�������ҵ��ڼ���쳲���������--->");
//	scanf("%d", &k);
//	ret = Fib(k);
//	printf("��%d��쳲��������ǣ�%d", k, ret);
//	return 0;
//}


//}//�õݹ�ʵ��쳲�������--1 1 2 3 5 8 13 21 34 55.....
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
//	printf("�������ҵ��ڼ���쳲���������--->");
//	scanf("%d", &k);
//	ret = Fib(k);
//	printf("��%d��쳲��������ǣ�%d", k, ret);
//	return 0;
//}




//�ݹ�ʵ��n��k�η�
//#include <stdio.h>
////x��y��=x*x�ģ�y-1����
//int fac(int x, int y)
//{
//	while (y != 0)
//		return x * fac(x, y - 1);
//	return 1;
//}
//int main()
//{
//	printf("����������ʵ��n��k�η�\n");
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	printf("������n��");
//	scanf("%d", &n);
//	printf("������k��");
//	scanf("%d", &k);
//	ret=fac(n, k);
//	printf("%d��%d�η�=%d",n,k,ret);
//	return 0;
//}





//�ݹ�ʵ��-һ��������ÿλ֮�ͣ����磺1234    -->10
//#include <stdio.h>
//int DigitSum(int m)
//{
//	//1234/10=123    4
//	//123/10=12  3   
//	//12/10=1 2  
//	//1/10=0,�����m=0��ֱ�ӷ���0��ǰ������ֶ��Ѿ�ȡ��
//	while (m != 0)
//		return (m % 10) + DigitSum(m / 10);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	printf("������һ��������");
//	scanf("%d", &x);
//	int sum = 0;
//	sum = DigitSum(x);
//	printf("%d��ÿλ֮��Ϊ��%d", x, sum);
//	return 0;
//}





//��д����reverse_string(char *p)���ַ�������������õݹ鷽ʽʵ��
//#include <stdio.h>
//void reverse_string(char *p)
//{
//	if (*p != '\0')//\0�ַ���������־�������һ����ʼ���
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

//�ǵݹ�ʵ��strlen
//#include <stdio.h>
//int my_strlen(char *p)//��ָ����յ�ַ
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
//	int len = my_strlen(arr);//�����������Ԫ�ص�ַ
//	printf("%d", len);
//	return 0;
//}


//�ݹ�ʵ��strlen
//#include<stdio.h>
//int my_strlen(char *p)//��ָ����յ�ַ
//{
//	if (*p != '\0')//'\0'���ַ����Ľ�����־
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main()
//{
//	//char arr[] = "abcdef";
//	//int len = my_strlen(arr);//�����������Ԫ�ص�ַ
//	char *arr = "abcdef";	//��ָ������Ԫ�ص�ַ
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}





//�ݹ���n!=n*(n-1)!=n*(n-1)*(n-2)!
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
//	printf("������n��ȡֵ��");
//	scanf("%d", &n);
//	ret=fac(n);
//	printf("%d!=%d", n, ret);
//	return 0;
//}


//�ǵݹ�ʵ����n!
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	printf("������n��ȡֵ��");
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



//�ݹ鷽ʽʵ��--��ӡһ�����ֵ�ÿһλ������123
//#include <stdio.h>
//void fac(int m)
//{
//	if (m > 9)//����Ǹ�λ��ֱ������ͺ�
//	{
//		fac(m / 10);//123--12  3--1  2  3
//	}
//	printf("%d\t", m % 10);//ÿ��ȡ�����һλ
//	
//}
//
//int main()
//{
//	int x = 0;
//	printf("���������֣�");
//	scanf("%d", &x);
//	fac(x);
//	return 0;
//}





//���ֲ���(�۰����)������һ�����飬�ҵ�������ĳ������λ��
//�ҵ�Ԫ��7��λ��
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//������������һ��Ԫ�ص��±�
//	int mid = (left + right) / 2;//�ҵ��м�Ԫ���±�
//	printf("����Ϊ��\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("[%d]\t", arr[i]);
//	}
//	printf("������Ҫ���ҵ�Ԫ�أ�");
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		if (arr[mid] > k)//�м�Ԫ�ر�7��˵��7���м�Ԫ�ص���ߣ���������
//		{
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//			
//
//		else if (arr[mid] < k)//�м�Ԫ�ر�7С��˵��7���м�Ԫ�ص��ұߣ���������
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else
//		{
//			printf("Ԫ��%d���±�Ϊ��%d", k, mid);
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






//��������Ϸ
//#include <stdio.h>
//����һ�������������������ֺ��������ͬ����¶���
//void Top(void)
//{
//	printf("*******************************************\n");
//	printf("********1--��ʼ��Ϸ****0--�˳���Ϸ***********\n");
//	printf("*******************************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;//�������������1-100֮��
//	int m = 0;
//	//while(1)��ԶΪ�棬ֻ������break�ſ�����������һֱѭ��
//	while (1)//����Ϸ
//	{
//		printf("���������֣�");
//		scanf("%d", &m);
//		if (m > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (m < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶��ˣ���Ϸ����\n");
//			break;
//		}
//	} 
//}
////������
//int main()
//{
//	srand((unsigned int)time(NULL));//һ������һ�����������һ����Ϸ������һ�μ���
//	int input = 0;
//	do
//	{
//		Top();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			printf("��ʼ��������Ϸ\n");
//			game();
//		}
//		else if (input == 0)
//			printf("�˳���Ϸ\n");
//		else
//			printf("�������\n");
//	} while (input);//�ж�Ϊ�������ѭ����Ϊ�������ѭ����0Ϊ�٣���0Ϊ�棩
//	
//	return 0;
//}






//��ӡ�žų˷��ھ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;	
//	int s = 0;
//	int x = 0;
//	printf("������x��ȡֵ��");
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





//��ʮ�������е����ֵ
//#include <stdio.h>
//int main()
//{
//	int i = 0;//������ʼ��
//	int a[10] = { 0 };//�����ʼ��:���Է�10������������
//	int max = 0;
//	printf("������ʮ��������");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	if (i = 10)
//		printf("�����������ʼ�Ƚϣ�����\n");
//	max = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("�������ǣ�%d", max);
//	return 0;
//}





//����1/1 - 1/2 + 1/3 +......- 1/100�Ľ��
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		//���г�������ʱ��������һ��ΪС���������ΪС��
//		if (i % 2 == 0)
//			sum = sum - (1.0 / i);
//		else
//			sum = sum + (1.0 / i);
//	}
//	printf("%f", sum);
//	return 0;
//}





//��д��������1-100�����������г���9�Ĵ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 98; i < 100; i++)
//	{
//		if (i / 10 == 9)//ȡ��ʮλ����
//			count++;
//		if (i % 10 == 9)//ȡ����λ����
//			count++;		
//	}
//	printf("%d", count);
//	return 0;
//}





//��ӡ100��200֮�������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;//���
//	int n = 0;//�յ�
//	printf("��������㣺");
//	scanf("%d", &m);
//	printf("�������յ㣺");
//	scanf("%d", &n);
//	for (i = m; i <= n; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;	
//		}
//		//ֻ�е�ǰ���ѭ������ȫ�������������ſ��ж�����������ʱj=i
//		if (j ==i)//����ĳ���
//		{
//			printf("�����������֮�������Ϊ��%d\n", i);
//		}
//	}
//	return 0;
//}





//�ж����������ǲ�������
//#include <stdio.h>
//int Year(int m)//�Զ�����ж���ݺ���
//{
//	if (m % 400 == 0)
//		printf("%d������\n", m);
//	else if ((m % 4 == 0) && (m % 100 != 0))
//		printf("%d������\n", m);
//	else
//		printf("%d��������\n", m);
//}
//int main()
//{
//	int x = 0;
//	printf("��������Ҫ�жϵ���ݣ�");
//	scanf("%d", &x);
//	Year(x);
//	return 0;
//}





//��ӡ1000�굽2000��֮�������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ( i % 400 == 0 )
//			printf("1000��2000֮��������У�%d\n",i);
//		else if ( (i % 4 == 0) && (i % 100 != 0) )
//			printf("1000��2000֮��������У�%d\n", i);
//	}
//	return 0;
//}