#define _CRT_SECURE_NO_WARNINGS 1
//把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
//输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
//例如数组{ 3,4,5,1,2 }为{ 1,2,3,4,5 }的一个旋转，该数组的最小值为1。
//NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {

		//非递减以右侧为target
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