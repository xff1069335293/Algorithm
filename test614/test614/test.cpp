#define _CRT_SECURE_NO_WARNINGS 1
//统计回文
#include<iostream> 
#include<string> 
using namespace std;
bool palindrome(const string &s) 
{ 
	int begin=0,end=s.size()-1; 
	while (begin<end) 
	{
		if (s[begin] == s[end])
		{ 
			++begin;
			--end;
		}
		else 
		{ 
			return false;
		} 
	}
	return true; 
}
int main() 
{
	string s1, s2; 
	cin >> s1 >> s2;
	string s(s1);
	int count = 0;
	for (int i = 0; i <= s1.size(); ++i) 
	{
		s.insert(i, s2); 
		if (palindrome(s)) 
		{ 
			++count;
		}
		s = s1; 
	}
	cout << count << endl; 
	system("pause");
	return 0; 
}