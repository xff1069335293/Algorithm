#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int minn(int n)
{
	for (int i = n; n > 2; --n)
	{
		int flag = 0;
		for (int j = 2; j < n / 2; ++j)
		{
			if (n%j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			return n;
		}
	}
	return n;
}
int maxn(int n)
{
	for (int i = n; ; ++n)
	{
		int flag = 0;
		for (int j = 2; j < n / 2; ++j)
		{
			if (n%j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			return n;
		}
	}
	return n;
}
int main()
{
	int n = 0;
	cin >> n;
	n /= 2;
	int min = minn(n);
	int max = maxn(n);
	while ((min + max) != 2 * n)
	{
		if ((min + max) > 2 * n)
		{
			min = minn(min - 1);
		}
		else if ((min + max) < 2 * n)
		{
			max = maxn(max + 1);
		}
		else
		{
			break;
		}
	}
	cout << min << endl;
	cout << max << endl;
	system("pause");
	return 0;
}