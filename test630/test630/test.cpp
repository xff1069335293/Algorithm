#define _CRT_SECURE_NO_WARNINGS 1
//����һ��ʮ������M���Լ���Ҫת���Ľ�����N����ʮ������Mת��ΪN������
//�������� :
//����Ϊһ�У�M(32λ����)��N(2 �� N �� 16)���Կո������
//������� :
//Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С�
//���N����9�����Ӧ�����ֹ���ο�16���ƣ����磬10��A��ʾ���ȵȣ�
//ʾ��1
//����
//7 2
//���
//111

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s("0123456789ABCDE");
	int m = 0, n = 0;
	cin >> m >> n;
	int count = 0;
	vector<int> v(32, 0);
	if (m < 0)
	{
		m = -m;
		cout << '-';
	}
	while (m)
	{
		int carry = m % n;
		v[count++] = carry;
		m /= n;
	}
	for (int i = count - 1; i >= 0; --i)
	{
		cout << s[v[i]];
	}
	return 0;
}
	