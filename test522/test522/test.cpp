/*��Ŀ����
HZż������Щרҵ������������Щ�Ǽ����רҵ��ͬѧ��
��������鿪����, ���ַ�����:�ڹ��ϵ�һάģʽʶ����,
������Ҫ��������������������, ������ȫΪ������ʱ��, 
����ܺý��������, ��������а�������, �Ƿ�Ӧ�ð���ĳ������,
�������Աߵ��������ֲ����أ����� : {6, -3, -2, 7, -15, 1, 2, 2}, 
����������������Ϊ8(�ӵ�0����ʼ, ����3��Ϊֹ)����һ�����飬
��������������������еĺͣ���᲻�ᱻ������ס��(�������ĳ���������1*/)
class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		int sum = array[0], num = 0, max = INT_MIN;
		int flag = 0;
		for (int i = 0; i < array.size(); ++i) {
			num += array[i];
			if (num > sum&& num > 0) {
				sum = num;
				flag = 1;
			}
			if (num < 0) {
				if (num > max) {
					max = num;
				}
				sum = 0;
				num = 0;
			}
		}
		return flag > 0 ? sum : max;
	}
};