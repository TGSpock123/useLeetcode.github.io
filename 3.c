#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int len = strlen(s);

    if (len == 0) {
        return 0;
    }

    int maxLength = 0;
    int start = 0; // 记录当前子串的起始位置

    int charIndex[128]; // 用于记录字符在字符串中的最后出现位置
    memset(charIndex, -1, sizeof(charIndex)); // 初始化为-1，表示字符尚未出现过

    for (int end = 0; end < len; end++) {
        // 如果当前字符已经在子串中出现过，更新子串的起始位置
        start = (charIndex[s[end]] >= start) ? charIndex[s[end]] + 1 : start;

        // 更新字符的最后出现位置
        charIndex[s[end]] = end;

        // 更新最大长度
        maxLength = (end - start + 1 > maxLength) ? end - start + 1 : maxLength;
    }

    return maxLength;
}
