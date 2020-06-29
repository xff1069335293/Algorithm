#define _CRT_SECURE_NO_WARNINGS 1
//A, B, C三个人是好朋友, 每个人手里都有一些糖果, 我们不知道他们每个人手上具体有多少个糖果, 但是我们知道以下的信息：
//A - B, B - C, A + B, B + C.这四个数值.每个字母代表每个人所拥有的糖果数.
//现在需要通过这四个数值计算出每个人手里有多少个糖果, 即A, B, C。这里保证最多只有一组整数A, B, C满足所有题设条件。
//
//输入描述 :
//输入为一行，一共4个整数，分别为A - B，B - C，A + B，B + C，用空格隔开。 范围均在 - 30到30之间(闭区间)。
//
//输出描述 :
//输出为一行，如果存在满足的整数A，B，C则按顺序输出A，B，C，用空格隔开，行末无空格。 如果不存在这样的整数A，B，C，则输出No
//示例1
//输入
//1 - 2 3 4
//输出
//2 1 3
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(4);
	for (int i = 0; i < 4; ++i)
	{
		cin >> v[i];
	}
	int A = (v[0] + v[2]) / 2;
	int B1 = (v[1] + v[3]) / 2;
	int B2 = (v[2] - v[0]) / 2;
	int C = (v[3] - v[1]) / 2;
	if (B1 == B2)
		cout << A << " " << B1 << " " << "" << C << endl;
	else
		cout << "No" << endl;
	return 0;
}
————————————————
版权声明：本文为CSDN博主「我是小锋锋」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https ://blog.csdn.net/qq_41152046/article/details/107030671