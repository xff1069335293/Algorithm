#define _CRT_SECURE_NO_WARNINGS 1
//һ�������� N ��Ԫ�أ�����������������͡� ���磺[-1, 2, 1]������������������Ϊ[2, 1]�����Ϊ 3
//
//��������:
//����Ϊ���С� ��һ��һ������n(1 <= n <= 100000)����ʾһ����n��Ԫ�� �ڶ���Ϊn��������ÿ��Ԫ��, ÿ����������32λint��Χ�ڡ��Կո�ָ���
//
//������� :
//���������������к�����ֵ��
//ʾ��1
//����
//3 - 1 2 1
//���
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
