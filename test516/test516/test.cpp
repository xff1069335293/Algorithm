//题目描述
//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
//例如输入一个长度为9的数组{ 1,2,3,2,2,2,5,4,2 }。
//由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
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