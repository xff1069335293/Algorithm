#define _CRT_SECURE_NO_WARNINGS 1
/*【倒置字符串】将一句话的单词进行倒置，标点不倒置。
比如 I like beijing.
经过函数后变为：beijing.like I*/

#include<iostream> 
#include<string>
#include<algorithm> 
using namespace std; 
int main() 
{ 
	string s;
	getline(cin,s);
	int begin = 0,end =s.size()-1;
	while (begin<end) 
	{
		swap(s[begin++],s[end--]);
	}
	int n=0; 
	for (int i=0; i<s.size()+1; ++i) 
	{ 
		if (s[i]==' ' || s[i] =='\0') 
		{
			reverse(s.begin()+n,s.begin()+i);
			n=i+1;
		}
	}
	cout<<s<<endl;
	return 0; 
}