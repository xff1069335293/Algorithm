#define _CRT_SECURE_NO_WARNINGS 1
/*��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
��������{ 3,4,5,1,2 }Ϊ{ 1,2,3,4,5 }��һ����ת�����������СֵΪ1��
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��*/
class Solution {
public: 
	int minNumberInRotateArray(vector<int> rotateArray) { 
		if (rotateArray.empty()) 
		{
			return 0; 
		}
		for (int i = 0; i < rotateArray.size() - 1; i++) 
		{
			if (rotateArray[i] > rotateArray[i + 1]) 
			{
				return rotateArray[i + 1];
			} 
		}
		return rotateArray[0];
	}
};