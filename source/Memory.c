//
// Created by htf on 2020/9/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 分配内存
    char *description = malloc(6 * sizeof(char));
//    char *description = calloc(6, sizeof(char));
    strcpy(description, "Hello");
    printf("description = %s\n", description);

    // 重新分配内存
    description = realloc(description, 12 * sizeof(char));
    strcat(description, " world");
    printf("description = %s\n", description);

    // 释放内存
    free(description);
    return 0;
}