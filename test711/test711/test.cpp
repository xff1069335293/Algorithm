#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		cin.get();
		vector<string> v(n);
		for (int i = 0; i < n; ++i)
		{
			getline(cin, v[i]);
			string tmp;
			if (v[i].find(' ') != -1 || v[i].find(',') != -1)
			{
				tmp += "\"";
				tmp += v[i];
				tmp += "\"";
				v[i] = tmp;
			}
		}
		for (int i = 0; i < v.size(); ++i)
		{
			cout << v[i] << ", ";
		}
		cout << v[v.size() - 1] << endl;
	}
	system("pause");
	return 0;
}