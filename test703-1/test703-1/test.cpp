#define _CRT_SECURE_NO_WARNINGS 1
//杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
#include<iostream>
#include<vector>
using namespace std;
bool Isin(vector<vector<int>> v,int n,int m,int num)
{
	int x = n-1, y = 0;
	while (x >= 0 && x < n&&y >= 0 && y < m)
	{
		int index = v[x][y];
		if (num>index)
		{
			++y;
		}
		else if (num < index)
		{
			--x;
		}
		else
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	vector<vector<int>> v(n);
	for (int i = 0; i < n; ++i)
	{
		v[i].resize(m);
		for (int j = 0; j < m; ++j)
		{
			cin >> v[i][j];
		}
	}
	int num= 0;
	while (cin >> num)
	{
		if (Isin(v, n, m, num))
		{
			cout << "存在" << endl;
		}
		else
		{
			cout << "不存在" << endl;
		}
	}
	system("pause");
	return 0;
}
