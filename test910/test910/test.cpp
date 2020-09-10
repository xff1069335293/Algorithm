#define _CRT_SECURE_NO_WARNINGS 1
//æÿ’Û∏≤∏«
class Solution {
public:
	int rectCover(int number) {
		//f(n) = 2*f(n-1)+1;//1-1 2-2 3-3 4-5 5-9
		int *dp = new int[number + 1];
		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 2;
		for (int i = 3; i <= number; ++i)
		{
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		return dp[number];
	}
};