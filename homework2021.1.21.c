#define _CRT_SECURE_NO_WARNINGS
////��������Ϸ
//#include <stdio.h>
////����һ�������������������ֺ��������ͬ����¶���
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









////1ƿ��ˮ1Ԫ��2����ƿ��һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
//#include <stdio.h>
//int main()
//{
//	int money = 20;
//	int total = 0;
//	int empty = 0;
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;//������Ŀ�ƿ
//	}
//	printf("%d", total);
//	return 0;
//}