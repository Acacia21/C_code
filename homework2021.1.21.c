#define _CRT_SECURE_NO_WARNINGS
////猜数字游戏
//#include <stdio.h>
////产生一个随机数，如果输入数字和随机数相同，则猜对了
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









////1瓶汽水1元，2个空瓶换一瓶汽水，给20元，可以喝多少汽水
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
//		empty = empty / 2 + empty % 2;//多出来的空瓶
//	}
//	printf("%d", total);
//	return 0;
//}