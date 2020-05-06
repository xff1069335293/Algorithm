﻿//给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
//
//示例 1 :
//
//输入: "Let's take LeetCode contest"
//	输出 : "s'teL ekat edoCteeL tsetnoc"
//	注意：在字符串中，每个单词由单个空格分隔，并且字符串中不会有任何额外的空格。

	
void reverse(char **s, int start, int end)
{
	while (start < end)
	{
		char ch = (*s)[start];
		(*s)[start] = (*s)[end];
		(*s)[end] = ch;
		++start, --end;
	}
}
char * reverseWords(char * s) {
	int i = 0, j = 0;
	while (j < strlen(s))
	{
		while (s[j] && s[j] != ' ') ++j; // 找单词的结尾
		reverse(&s, i, j - 1);
		i = j++ + 1;
	}
	return s;
}