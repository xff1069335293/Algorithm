//�����ַ������һ�����ʵĳ��ȣ������Կո������
//��������:
//һ���ַ������ǿգ�����С��5000��
//������� :
//����N�����һ�����ʵĳ��ȡ�
//ʾ��1
//����
//hello world
//���
//5

#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	while (getline(cin, s)) {
		size_t pos = s.rfind(' ');
		cout << (s.size() - pos - 1) << endl;
	}
	return 0;
}