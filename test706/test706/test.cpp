#define _CRT_SECURE_NO_WARNINGS 1
//【有假币】居然有假币！ 现在猪肉涨了，但是农民的工资却不见涨啊，
//没钱怎么买猪肉啊。nowcoder这就去买猪肉，结果找来的零钱中有假币！！！
//可惜nowcoder 一不小心把它混进了一堆真币里面去了。
//只知道假币的重量比真币的质量要轻，给你一个天平（天平两端能容纳无限个硬币）
//，请用最快的时间把那个可恶的假币找 出来。
#include<iostream> 
using namespace std; 
int count(long long n) 
{
	if (n<4) 
		return 1; 
	int ret = 1+count(n/2);
	return ret; 
}
int main() { 
	long long n=0;
	while ((cin>>n))
	{
		if (n==0) 
			break;
		else 
		{
			int ret =0;
			while(n>=2)
			{ 
				if (n % 3)
				{
					n=n/3+1;
				}
				else 
				{
					n/=3; 
				}
				ret++;
			} 
			cout<<ret<<endl;
		}
	}
	return 0; 
}