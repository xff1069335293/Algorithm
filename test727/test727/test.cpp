#define _CRT_SECURE_NO_WARNINGS 1
//һֻ����һ�ο�������1��̨�ף�Ҳ��������2����
//�����������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
class Solution {
public:
	int jumpFloor(int number)
	{
		if (number == 0 || number == 1)
			return 1;
		if (number == 2)
			return 2;
		return jumpFloor(number - 1) + jumpFloor(number - 2);
	}
};