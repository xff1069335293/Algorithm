#define _CRT_SECURE_NO_WARNINGS 1
//给定一个字符串 s 和一个整数 k，你需要对从字符串开头算起的每隔 2k 个字符的前 k 个字符进行反转。
//如果剩余字符少于 k 个，则将剩余字符全部反转。
//如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
//示例 :
//输入: s = "abcdefg", k = 2
//	输出 : "bacdfeg"
//

class Solution {
public:
	string reverseStr(string s, int k) {
		string::iterator it = s.begin();
		while (it < s.end() && it + k <= s.end())
		{
			reverse(it, it + k);
			it = it + 2 * k;
		}
		if (it + k > s.end())
			reverse(it, s.end());
		return s;
	}
};