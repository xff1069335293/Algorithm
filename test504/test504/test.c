//给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 - 1。
//
//案例 :
//
//s = "leetcode"
//返回 0.
//
//s = "loveleetcode",
//返回 2.


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