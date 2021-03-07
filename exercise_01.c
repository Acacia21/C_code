#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
void rotate(int* nums, int numsSize, int k)
{
	while (k > 0)
	{
		int num = nums[numsSize - 1];//保存最后一个字符
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
//1.保存最后一个元素
//2.每次向右移动一个单位，然后将最后一个元素赋给第0位
//3.重复K次