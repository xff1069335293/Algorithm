#define _CRT_SECURE_NO_WARNINGS 1
/*����һ���ַ���s��һ�鵥��dict���ж�s�Ƿ�����ÿո�ָ��һ���������У�ʹ�õ������������еĵ��ʶ���dict�еĵ��ʣ����п��԰���һ���������ʣ���
���� :
����s = ��leetcode����
dict = ["leet", "code"].
����true����Ϊ"leetcode"���Ա��ָ��"leet code".*/
#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>
using namespace std;
class Solution {
public:
	bool wordBreak(string s, unordered_set<string> &dict) {
		if (s.empty() || dict.empty())
			return false;
		vector<bool> can_break(s.size() + 1, false);
		can_break[0] = true;
		for (int i = 1; i <= s.size(); ++i)
		{
			for (int j = i - 1; j >= 0; --j)
			{
				if (can_break[j] && dict.find(s.substr(j, i-j)) != dict.end())
				{
					can_break[i] = true;
					break;
				}
			}
		}
		return can_break[s.size()];
	}
};

int main()
{
	Solution sn;
	string s = "dogs";
	unordered_set<string> dict;
	dict.insert("dog");
	dict.insert("s");
	dict.insert("gs");
	cout << sn.wordBreak(s, dict) << endl;
	system("pause");
	return 0;
}