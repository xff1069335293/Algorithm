#define _CRT_SECURE_NO_WARNINGS 1
//���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ���
//���磬���롱They are students.���͡�aeiou������ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��
//�������� :
//ÿ�������������2���ַ���
//������� :
//���ɾ������ַ���
//ʾ��1
//����
//����
//They are students.
//aeiou
//���
//����
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
				--it1;//��������˵Ļ�����s2��û�к͵�ǰ��λ�ñȽ�ȫ��
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
//�Ż�
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