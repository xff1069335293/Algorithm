//����һ���ַ������ҵ����ĵ�һ�����ظ����ַ���������������������������ڣ��򷵻� - 1��
//
//���� :
//
//s = "leetcode"
//���� 0.
//
//s = "loveleetcode",
//���� 2.


int firstUniqChar(char * s) {
	int len = strlen(s);
	int i = 0;
	if (len == 0)
		return -1;

	int table[26] = { 0 };
	for (i = 0; i < len; i++)
		table[s[i] - 'a']++;

	for (i = 0; i < len; i++) {
		if (table[s[i] - 'a'] == 1)
			return i;
	}

	return -1;
}