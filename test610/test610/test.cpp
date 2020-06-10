#define _CRT_SECURE_NO_WARNINGS 1
/*�����������ַ�����ʽ��ʾ�ķǸ����� num1 �� num2������ num1 �� num2 �ĳ˻������ǵĳ˻�Ҳ��ʾΪ�ַ�����ʽ��
ʾ�� 1:
����: num1 = ��2��, num2 = ��3��
	��� : ��6��
	ʾ�� 2 :
	���� : num1 = ��123��, num2 = ��456��
	��� : ��56088��
	˵����
	num1 �� num2 �ĳ���С��110��
	num1 �� num2 ֻ�������� 0 - 9��
	num1 �� num2 �������㿪ͷ������������ 0 ����
	����ʹ���κα�׼��Ĵ������ͣ����� BigInteger����ֱ�ӽ�����ת��Ϊ����������
	*/
class Solution {
public:
	string multiply(string num1, string num2) {
		string s;
		if (num2.empty())
			return num1;
		if (num1.empty())
			return num2;
		if (num1 == "0" || num2 == "0")
		{
			s += "0";
			return s;
		}
		int n1 = num1.size() - 1, n2 = num2.size() - 1;
		int carry = 0, count = 0, sum = 0;
		vector<int> v(num1.size() + num2.size(), 0);
		while (n2 >= 0)
		{
			n1 = num1.size() - 1;
			count = num2.size() - 1 - n2;
			carry = 0;
			while (n1 >= 0)
			{
				sum = (v[count] + carry + (num1[n1] - '0')*(num2[n2] - '0'));
				v[count] = sum % 10;
				carry = sum / 10;
				++count;
				--n1;
			}
			if (carry > 0)
			{
				v[count++] = carry;
			}
			--n2;
		}
		for (int i = 0; i < count; ++i)
		{
			s += (v[i] + '0');
		}
		reverse(s.begin(), s.begin() + count);
		return s;
	}
};
