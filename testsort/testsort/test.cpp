#define _CRT_SECURE_NO_WARNINGS 1
//ц╟ещеепР
#include<iostream>
#include<vector>
using namespace std;
void Sort(vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v.size() - i - 1; ++j)
		{
			if (v[j] > v[j + 1])
				swap(v[j], v[j + 1]);
		}
	}
}
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < v.size(); ++i)
	{
		cin >> v[i];
	}
	Sort(v);
	for (auto &e : v)
		cout << e << " ";
	return 0;
}