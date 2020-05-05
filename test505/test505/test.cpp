//���ַ��� s ���ҳ���һ��ֻ����һ�ε��ַ������û�У�����һ�����ո�
//
//ʾ�� :
//
//s = "abaccdeff"
//���� "b"
//
//s = ""
//���� " "


char firstUniqChar(char* s) {
	if (s == NULL) {
		return ' ';
	}

	int array[26] = { 0 };
	int len = strlen(s);
	for (int i = 0; i < len; ++i) {
		array[s[i] - 'a']++;
	}

	for (int i = 0; i < len; ++i) {
		if (array[s[i] - 'a'] == 1) {
			return s[i];
		}
	}
	return ' ';
}