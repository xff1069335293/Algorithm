#define _CRT_SECURE_NO_WARNINGS 1
//ÆûË®¶Ò»»£¨2¿ÉÒÔ½è1£©3»»1
#include<iostream>
using namespace std;
int change(int n)
{
	int sum = n / 3;
	if (n < 2)
		return 0;
	if (n == 2 || n == 3)
		return 1;
	return sum + change(sum + n % 3);
}
int main()
{
	int n = 0;
	while (cin >> n)
	{
		int ret = change(n);
		cout << ret << endl;
	}
	system("pause");
	return 0;
}