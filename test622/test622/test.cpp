#define _CRT_SECURE_NO_WARNINGS 1
//最近公共祖先
class LCA {
public: int getLCA(int a, int b) 
{ // write code here 
	if (a==1||b==1)
	{ 
		return 1;
	}
	if (a == b) 
	{ 
		return a; 
	}
	if (a > b) 
	{
		return getLCA(a / 2, b); 
	}
	if (a < b) 
	{
		return getLCA(a, b / 2); 
	}
	return 1;
}
};