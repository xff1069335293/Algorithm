#define _CRT_SECURE_NO_WARNINGS 1
//输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
//例如，输入”They are students.”和”aeiou”，则删除之后的第一个字符串变成”Thy r stdnts.”
//输入描述 :
//每个测试输入包含2个字符串
//输出描述 :
//输出删除后的字符串
//示例1
//输入
//复制
//They are students.
//aeiou
//输出
//复制
//Thy r stdnts.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2, s;
	getline(cin, s1);
	getline(cin, s2);
	auto it1 = s1.begin();
	auto it2 = s2.begin();
	while (it1 != s1.end())
	{
		
		auto begin = it2;
		while (begin != s2.end())
		{
			if (*begin == *it1)
			{
			
				it1 = s1.erase(it1);
				--it1;//如果不回退的话，从s2就没有和当前的位置比较全。
			}
			else
			{
				++begin;
			}
		}
		++it1;
	}
	cout << s1 << endl;
	system("pause");
	return 0;
}
//优化
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2, s;
	getline(cin, s1);
	getline(cin, s2);
	auto it1 = s1.begin();
	auto it2 = s2.begin();
	while (it1 != s1.end())
	{
		int flag = 0;
		auto begin = it2;
		while (begin != s2.end())
		{
			if (*begin == *it1)
			{
				flag = 1;
				break;
			}
			++begin;
		}
		if (flag == 0)
		{
			s += *it1;
		}
		++it1;
	}
	cout << s << endl;
	system("pause");
	return 0;
}