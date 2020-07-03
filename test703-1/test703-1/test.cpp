#define _CRT_SECURE_NO_WARNINGS 1
//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
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
			cout << "����" << endl;
		}
		else
		{
			cout << "������" << endl;
		}
	}
	system("pause");
	return 0;
}
