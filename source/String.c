//
// Created by htf on 2020/9/23.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "String";
    char str3[12];

    // 复制 str1 到 str3
    strcpy(str3, str1);
    printf("str3 = %s\n", str3);

    // 连接 str2 到 str1 的末尾。
    strcat(str1, str2);
    printf("str1 = %s\n", str1);

    // str1 的长度
    unsigned long long len = strlen(str1);
    printf("len = %llu\n", len);
    return 0;
}