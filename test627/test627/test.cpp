#define _CRT_SECURE_NO_WARNINGS 1
//只出现一次的字符，如果有多个，输出第一个
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		int flag = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			int count = 0;
			for (int j = 0; j < s.size(); ++j)
			{
				if (s[i] == s[j])
				{
					++count;
				}
			}
			if (count == 1)
			{
				flag = 1;
				cout << s[i] << endl;
				break;
			}
		}
		if (flag != 1)
		{
			cout << "-1" << endl;
		}
	}
	system("pause");
	return 0;
}