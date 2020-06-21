#define _CRT_SECURE_NO_WARNINGS 1
//×Ö·û´®¼Ó·¨
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string add(string& ad, string& au)
{
	int end1 = ad.size() - 1, end2 = au.size() - 1;
	int carry = 0;
	string ret;
	while (end1 >= 0 || end2 >= 0 || carry > 0)
	{
		int x1 = end1 < 0 ? 0 : ad[end1] - '0';
		int x2 = end2 < 0 ? 0 : au[end2] - '0';
		ret += ((x1 + x2 + carry) % 10 + '0');
		carry = (x1 + x2 + carry) / 10;
		--end1;
		--end2;
	}
	return ret;
}
int main()
{
	string ad, au;
	while (cin >> ad >> au)
	{
		string ret = add(ad, au);
		reverse(ret.begin(), ret.end());
		cout << ret << endl;
	}
	system("pause");
	return 0;
}