#define _CRT_SECURE_NO_WARNINGS 1
//дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ�� + �� - �� * �� / ����������š�
class Solution {
public:
	int Add(int num1, int num2)
	{
		/*int carry=num1&num2;
		int sum=num1^num2;
		while (carry)
		{
			int newsum=sum^(carry<<1);
			carry=sum&carry<<1;
			sum=newsum;
		}
		return sum;*/
		while (num2 != 0)
		{
			int tmp = num1 ^ num2;
			num2 = (num1&num2) << 1;
			num1 = tmp;
		}
		return num1;
	}
};
