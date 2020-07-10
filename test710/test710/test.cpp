#define _CRT_SECURE_NO_WARNINGS 1
//【分解因数】
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void primenumber(int n)
{ 
	//
	vector<int> ret;
	cout<<n<<" = "; 
	for(int i = 2 ;i < n; ++i) 
	{
		while((n>i) && (n%i==0)) 
		{
			cout<<i<<" * "; n/=i;
		} 
	}
	cout<<n<<endl; 
}
int main()
{ 
	int n=0; 
	while (cin>>n)
		primenumber(n); 
	return 0; 
}