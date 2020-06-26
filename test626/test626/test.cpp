#define _CRT_SECURE_NO_WARNINGS 1
//ÌâÄ¿ID£º46126-Ï´ÅÆ
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	vector<vector<int>> v(num);
	for (int i = 0; i < num; ++i)
	{
		int n = 0, k = 0;
		cin >> n >> k;
		v[i].resize(2 * n);
		for (int j = 0; j < 2 * n; ++j)
		{
			cin >> v[i][j];
		}
		vector<int> tmp(2 * n);
		for (int z = 0; z < k; ++z)
		{
			int prev = n - 1, tail = 2 * n - 1;
			int count = tail;
			while (prev>=0)
			{
				tmp[count--] = v[i][tail--];
				tmp[count--] = v[i][prev--];
			}
			v[i] = tmp;
		}
		for (auto& e : tmp)
		{
			cout << e << " ";
		}
	}
	system("pause");
	return 0;
}