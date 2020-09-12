#define _CRT_SECURE_NO_WARNINGS 1
//ºÚµ•¿®∫≈∆•≈‰Œ Ã‚
#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool Ismacth(string& s)
{
	stack<char> st;
	for (int i = 0; i < s.size(); ++i)
	{
		char tmp = s.at(i);
		if (tmp == '[' || tmp == '(')
		{
			st.push(tmp);
		}
		else if (tmp == ']')
		{
			if (!st.empty() && st.top() == '[')
				st.pop();
			else
				return false;
		}
		else if (tmp == ')')
		{
			if (!st.empty() && st.top() == '(')
				st.pop();
			else
				return false;
		}
		else
			;
	}
	return true;
}
int main()
{
	string s;
	cin >> s;
	if (Ismacth(s))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}