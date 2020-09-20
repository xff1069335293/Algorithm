#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int count(string &s, int n)
{
	int cnt = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (s[n + i] == s[n + 3 + i])
			++cnt;
		else
			--cnt;
	}
	return cnt;
}
bool Is(string& s)
{
	if (s.empty() || s.size() % 3 != 0)
		return false;
	for (int i = 0; i < s.size() - 3; i+=3)
	{
		if (count(s, i) == -1)
			return false;
		else
			;
	}
	return true;
}
int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector<string> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			if (Is(v[i]))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	system("pause");
	return 0;
}