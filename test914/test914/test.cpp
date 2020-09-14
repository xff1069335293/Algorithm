#define _CRT_SECURE_NO_WARNINGS 1
//58±ÊÊÔ
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	/**
	 * ÕÒ³ö×Ö·û´®ÖĞ×î´ó¹«¹²×Ó×Ö·û´®
	 * @param str1 string×Ö·û´® ÊäÈë×Ö·û´®1
	 * @param str2 string×Ö·û´® ÊäÈë×Ö·û´®2
	 * @return string×Ö·û´®
	 */
	string GetCommon(string str1, string str2) {
		// write code here
		string ret, tmp;
		auto begin1 = str1.begin(), end1 = str1.end();
		auto begin2 = str2.begin(), end2 = str2.end();
		while (begin1 < end1)
		{
			if (*begin1 == *begin2)
			{
				auto begins1 = begin1;
				while (begins1 < end1 && begin2 < end2 && *begins1 == *begin2)
				{
					tmp += *begin2;
					++begins1;
					++begin2;
				}
				if (tmp.size() > ret.size())
					ret = tmp;

			}
			else
			{
				++begin2;
			}
			if (begin2 == end2 && begin1 < end1)
			{
				++begin1;
				begin2 = str2.begin();
			}
		}
		return ret;
	}
};

//"abccade","dgcadde"
int main()
{
	Solution s;
	string str1 = "abccade";
	string str2 = "dgcadde";
	s.GetCommon(str1,str2);
	system("pause");
	return 0;
}