#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����
void rotate(int* nums, int numsSize, int k)
{
	while (k > 0)
	{
		int num = nums[numsSize - 1];//�������һ���ַ�
		int i = 0;
		for (i = numsSize - 1; i > 0; i--)
		{
			nums[i] = nums[i - 1];
		}
		nums[0] = num;
		k--;

	}
	return 0;
}
//1.�������һ��Ԫ��
//2.ÿ�������ƶ�һ����λ��Ȼ�����һ��Ԫ�ظ�����0λ
//3.�ظ�K��