#define _CRT_SECURE_NO_WARNINGS 1
//一个数组有 N 个元素，求连续子数组的最大和。 例如：[-1, 2, 1]，和最大的连续子数组为[2, 1]，其和为 3
//
//输入描述:
//输入为两行。 第一行一个整数n(1 <= n <= 100000)，表示一共有n个元素 第二行为n个数，即每个元素, 每个整数都在32位int范围内。以空格分隔。
//
//输出描述 :
//所有连续子数组中和最大的值。
//示例1
//输入
//3 - 1 2 1
//输出
//3
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int sum = 0, max = 0, min = 0xffffffff;
	int flag = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += v[i];
		if (sum >= max)
		{
			flag = 1;
			max = sum;
		}
		else
		{
			if (sum < 0)
			{
				if (sum > min)
				{
					min = sum;
				}
				sum = 0;
			}
		}
	}
	if (flag == 0)
		max = min;
	cout << max << endl;
	return 0;
}
