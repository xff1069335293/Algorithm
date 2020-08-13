#define _CRT_SECURE_NO_WARNINGS 1
//��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
//����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
//��������{ 3,4,5,1,2 }Ϊ{ 1,2,3,4,5 }��һ����ת�����������СֵΪ1��
//NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��
class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {

		//�ǵݼ����Ҳ�Ϊtarget
		if (rotateArray.size() == 0) return 0;
		int first = 0, last = rotateArray.size() - 1;
		while (first < last)
		{
			int mid = (first + last) >> 1;
			//3 4 5 1 2
			if (rotateArray[mid] > rotateArray[last])
				first = mid + 1;
			// 1 2 3 4 5
			else if (rotateArray[mid] < rotateArray[last])
				last = mid;
			// 1 0 1 1 1 || 1 1 1 0 1
			else
				last = last - 1;
		}
		return rotateArray[first];
	}
};