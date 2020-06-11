//×Ö·û¼¯ºÏ
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		auto begin = s.begin(); ;
		auto it = begin;
		while (it != s.end())
		{
			begin = it + 1;
			while (begin != s.end())
			{
				if (*it == *begin)
				{
					begin = s.erase(begin);
				}
				else
				{
					++begin;
				}
			}
			++it;
		}
		cout << s << endl;
	}
	system("pause");
	return 0;
}