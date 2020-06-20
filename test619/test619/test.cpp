#define _CRT_SECURE_NO_WARNINGS 1
//找出完美数
#include<iostream>
#include<vector>
using namespace std;
bool Ispnum(int n)
{
	vector<int> v;
	int min = 1, max = n - 1;
	while (min < max)
	{
		if (min*max > n)
		{
			--max;
		}
		else if (min*max < n)
		{
			++min;
		}
		else if (min*max == n)
		{
			v.push_back(min);
			v.push_back(max);
			++min;
			--max;
		}
	}
	int sum = 1;
	for (int i = 0; i < v.size(); ++i)
	{
		sum += v[i];
	}
	if (sum == n)
	{
		return true;
	}
	return false;
}
int count(int n)
{
	int cnt = -1;
	while (n)
	{
		if (Ispnum(n))
		{
			++cnt;
		}
		--n;
	}
	return cnt;
}
int main()
{
	int n = 0;
	while (cin >> n)
	{
		int ret = count(n);
		cout << ret << endl;
	}
	system("pause");
	return 0;
}