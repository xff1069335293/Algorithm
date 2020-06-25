#define _CRT_SECURE_NO_WARNINGS 1
//查找两个字符串a,b中的最长公共子串。若有多个，输出在较短串中最先出现的那个
#include<iostream>
#include<string>
using namespace std;
void prevstr(const string& s1, const string& s2)
{
	string ret;
	auto  begin1 = s1.begin(), end1 = s1.end(),
		begin2 = s2.begin(), end2 = s2.end();
	while ((begin1 < end1) || (begin2 < end2))
	{
		while (begin2 < end2 &&*begin1 != *begin2)
		{
			++begin2;
		}
		if (begin1 < end1 && begin2 == end2)
		{
			++begin1;
			begin2 = s2.begin();
		}
		string tmp;
		auto strsrc = begin1, strdst = begin2;
		while (begin1 < end1&& begin2 < end2 &&*begin1 == *begin2)
		{

			tmp += *begin1;
			++begin1;
			++begin2;
		}
		begin1 = strsrc;
		begin2 = ++strdst;
		if (tmp.size() > ret.size())
		{
			ret = tmp;
		}
		tmp.clear();
	}
	cout << ret << endl;
}
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		if (s1.size() > s2.size())
			prevstr(s2, s1);
		else
		{
			prevstr(s1, s2);
		}
	}
	return 0;
}