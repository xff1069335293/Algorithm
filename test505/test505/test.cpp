//在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。
//
//示例 :
//
//s = "abaccdeff"
//返回 "b"
//
//s = ""
//返回 " "


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