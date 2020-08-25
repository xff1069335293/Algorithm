#define _CRT_SECURE_NO_WARNINGS 1
//…Ó–≈∑˛±  ‘
/*#include<stdio.h>
#include<stdlib.h>
int align_n(unsigned int size, unsigned int n)
{
		int flag = 0;
		for (int i = 0; i < n; i++) {
			if ((size>>i)&1)
			{
				flag = 1;
			}
		}
		size += (flag << n);
		return size;
}
int main()
{
	unsigned int size, n;
	scanf("%x,%d", &size, &n);
	int ret = align_n(size, n);
	printf("0x%x\n", ret);
	system("pause");
	return 0;
}*/

/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool match(string& s1, string& s2)
{
	auto begin1 = s1.begin(), end1 = s1.end();
	auto begin2 = s2.begin(), end2 = s2.end();
	while (begin1 < end1)
	{
		if (*begin1 == *begin2)
		{
			auto begin = begin1;
			while (begin1 < end1 && begin2 < end2 && *begin1 == *begin2)
			{
				++begin1;
				++begin2;
			}
			if (begin2 == end2)
			{
				return true;
			}
			else
			{
				begin2 = s2.begin();
				begin1 = ++begin;
			}
		}
		else
		{
			++begin1;
		}
	}
	return false;
}
int main()
{
	int m, n;
	while (cin >> n >> m)
	{
		vector<string> v1(n), v2(m);
		for (int i = 0; i < n; ++i)
		{
			cin >> v1[i];
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> v2[i];
		}
		for (int i = 0; i < m; ++i)
		{
			int count = 0;
			for (int j = 0; j < n; ++j)
			{
				if (match(v1[j], v2[i]))
					++count;
			}
			v2[i] = count+'0';
		}
		for (auto&e : v2)
		{
			cout << e << endl;
		}
	}
	system("pause");
	return 0;
}*/
/*
0285289430826
2
2 3
0 2
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string s;
	int n = 0;
	while (cin >> s >> n)
	{
		map<int, int> mp;
		for (int i = 0; i < n; ++i)
		{
			int x, y;
			cin >> x >> y;
			mp.insert(pair<int, int>(x, y));
		}
		auto sbegin = s.begin(), send = s.end();
		auto mbegin = mp.begin(), mend = mp.end();
		while (sbegin < send)
		{
			auto begin = mp.begin();
			while (begin != mend)
			{
				if (*sbegin - '0' == begin->first)
				{
					*sbegin = begin->second + '0';
				}
				++begin;
			}
			++sbegin;
		}
		cout << s << endl;
	}
	system("pause");
	return 0;
}

/*
0285289430826
2
2 3
0 2
0285289430826
1
0 2
*/

/*#include<iostream>
#include<set>
using namespace std;
int count(set<int>& s)
{
	auto begin = s.begin(), end = s.end();
	while (begin != end)
	{

	}
	return
}
int main()
{
	int n;
	while (cin >> n)
	{
		int cnt = 0;
		set<int> s;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		int ret = count(s);
		cout << ret << endl;
	}
	system("pause");
	return 0;
}*/

