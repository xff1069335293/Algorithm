#define _CRT_SECURE_NO_WARNINGS 1
/*��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
��������һ������Ϊ9������{ 1,2,3,2,2,2,5,4,2 }��
��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0*/
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.empty()) {
			return 0;
		}
		int count = 0;
		sort(numbers.begin(), numbers.end());
		for (int i = 0; i < numbers.size(); ++i) {
			if (numbers[numbers.size() / 2] == numbers[i]) {
				++count;
			}
		}
		return count > numbers.size() / 2 ? numbers[numbers.size() / 2] : 0;
	}
};
	//�Ż�
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int cond = -1;
		int count = 0;
		for (int i = 0; i < numbers.size(); ++i)
		{
			if (count == 0)
			{
				cond = numbers[i];
				count = 1;
			}
			else
			{
				if (numbers[i] == cond)
					++count;
				else
					--count;
			}
		}
		count = 0;
		for (auto e : numbers)
		{
			if (e == cond)
				++count;
		}
		return count > (numbers.size()) / 2 ? cond : 0;
	}
};
