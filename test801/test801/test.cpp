#define _CRT_SECURE_NO_WARNINGS 1
/*��Ŀ������
��һ��m*n����������Ͻ���һ�������ˣ����������κ�ʱ��ֻ�����»��������ƶ���
��������ͼ������������½ǣ��ж��ٿ��ܵ�·����

��������̬�滮
״̬��
��״̬����(0, 0)����(1, 0), (1, 1), (2, 1), ...(m - 1, n - 1)��·����
F(i, j) : ��(0, 0)����F(i, j)��·����
״̬���ƣ�
F(i, j) = F(i - 1, j) + F(i, j - 1)
��ʼ����
�����������0�к͵�0��
F(0, i) = 1
F(i, 0) = 1
���ؽ����
F(m - 1, n - 1)
*/

class Solution {
public:

	int uniquePaths(int m, int n) {
		if (m < 1 || n < 1) {
			return 0;
		}
		// ����F(i,j)�ռ䣬��ʼ��
		vector<vector<int> > ret(m, vector<int>(n, 1));
		for (int i = 1; i < m; ++i) {
			for (int j = 1; j < n; ++j) {
				// F(i,j) = F(i-1,j) + F(i,j-1)
				ret[i][j] = ret[i - 1][j] + ret[i][j - 1];
			}
		}
		return ret[m - 1][n - 1];
	}
};