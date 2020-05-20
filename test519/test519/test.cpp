﻿//给定一个整数数组 nums，其中恰好有两个元素只出现一次，其余所有元素均出现两次。 找出只出现一次的那两个元素。
//示例 :
//输入: [1, 2, 1, 3, 2, 5]
//输出 : [3, 5]
//注意:
//结果输出的顺序并不重要，对于上面的例子， [5, 3] 也是正确答案。
//你的算法应该具有线性时间复杂度。你能否仅使用常数空间复杂度来实现？
//通过次数21, 186提交次数29, 403
class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		//抑或
		//分组
		int num = 0;
		for (auto& val : nums) {
			num ^= val;
		}
		for (int i = 0; i < 32; ++i) {
			if ((num >> i) & 1) {
				num = i;
				break;
			}
		}
		int a = 0, b = 0;
		for (auto& e : nums) {
			if ((e >> num) & 1) {
				a ^= e;
			}
			else {
				b ^= e;
			}
		}
		return { a,b };
	}
};