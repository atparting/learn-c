//
// Created by htf on 2020/9/22.
//

#include <stdio.h>

int max(int a, int b);

int main() {
    int num = 1;
    int *numPointer = NULL;
    numPointer = &num;
    printf("numPointer = %p\n", numPointer);

    int (*maxPointer)(int, int) = max;
    printf("max = %d\n", maxPointer(1, 2)); // 与 max(1, 2) 等价
    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}