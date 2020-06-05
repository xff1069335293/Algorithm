#define _CRT_SECURE_NO_WARNINGS 1
//一组字符串中最长连续数字
#include<iostream>
#include<string>
bool Isint(char ch)
{
	if (ch - '0' >= 0 && ch - '0' <= 9)
	{
		return true;
	}
	return false;
}
using namespace std;
int main()
{
	
	string s, s1;
	cin >> s;
	int begin = 0, end = s.size(), len = 0;
	while (begin < end)
	{
		while (begin < end && !Isint(s[begin]))
		{
			++begin;
		}
		int count = begin;
		while (begin < end && Isint(s[begin]))
		{
			++begin;
		}
		if (end - begin > len)
		{
			s1.clear();
			s1.append(s.begin() + begin, s.begin() + end);
			len = end - begin;
		}
	}
	cout << s1;
	system("pause");
	return 0;
}