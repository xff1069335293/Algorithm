class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int len = nums.size();
		sort(nums.begin(), nums.end());
		int a = 0;
		for (int i = 0; i < len - 1;) {
			a = nums[i] ^ nums[i + 1];
			if (a == 0) i += 3;
			else return nums[i];
		}
		return nums[len - 1];
	}
};