//����һ������ n ����1��n��n��������ʮ���Ʊ�ʾ��1���ֵĴ�����
//���磬����12��1��12��Щ�����а���1 ��������1��10��11��12��1һ��������5�Ρ�
//ʾ�� 1��
//���룺n = 12
//�����5
//ʾ�� 2��
//���룺n = 13
//�����6
//O(N^2)
class Solution {
public:
	int countDigitOne(int n) {
		int count = 0, num = 0;
		for (int i = 1; i <= n; ++i) {
			num = i;
			while (num) {
				if (num == 1 || num % 10 == 1) {
					++count;
				}
				num /= 10;
			}
		}
		return count;
	}
};