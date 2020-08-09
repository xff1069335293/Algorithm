#define _CRT_SECURE_NO_WARNINGS 1
//±äÌ¬ÌøÌ¨½×
class Solution {
public:
	int jumpFloorII(int number) {
		if (number == 1 || number == 0)
			return 1;
		vector<int> v(number + 1, 0);
		v[0] = v[1] = 1;
		for (int i = 2; i <= number; ++i)
		{
			for (int j = 0; j < i; ++j)
			{
				v[i] += v[j];
			}
		}
		return v[number];
	}
};