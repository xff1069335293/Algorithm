//��Ŀ����
//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
//��������һ������Ϊ9������{ 1,2,3,2,2,2,5,4,2 }��
//��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
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