//求1 + 2 + 3 + … + n，要求不能使用乘除法、for、while、
//if、else、switch、case等关键字及条件判断语句（A ? B : C）
#include<iostream>
using namespace std;
class Sum {
public:
	Sum() {
		_sum += _i;
		++_i;
	}
	static int GetSum() {
		return _sum;
	}
	static void Init() {
		_sum = 0;
		_i = 1;
	}
private:
	static int _sum;
	static int _i;
};
int Sum::_sum = 0;
int Sum::_i = 1;
class Solution {
public:
	int Sum_Solution(int n) {
		Sum::Init();
		//Sum a[n];
		//return Sum::GetSum();
		Sum* p = new Sum[n];
		return p->GetSum();
	}
};
int main() {
	int n = 0;
	cin >> n;
	Solution s;
	int sum = s.Sum_Solution(n);
	cout << sum;
	system("pause");
	return 0;
}