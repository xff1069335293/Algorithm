#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
//É¾³ýs1ÖÐs2µÄ×Ö·û
using namespace std;
int main() {
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	auto it1 = s1.begin();
	auto it2 = s2.begin();
	while (it1 != s1.end())
	{
		auto begin = it2;
		while (begin != s2.end())
		{
			if (*it1 == *begin)
			{
				it1 = s1.erase(it1);
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
