#define _CRT_SECURE_NO_WARNINGS 1
//���мٱҡ���Ȼ�мٱң� �����������ˣ�����ũ��Ĺ���ȴ�����ǰ���
//ûǮ��ô�����Ⱑ��nowcoder���ȥ�����⣬�����������Ǯ���мٱң�����
//��ϧnowcoder һ��С�İ��������һ���������ȥ�ˡ�
//ֻ֪���ٱҵ���������ҵ�����Ҫ�ᣬ����һ����ƽ����ƽ�������������޸�Ӳ�ң�
//����������ʱ����Ǹ��ɶ�ļٱ��� ������
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