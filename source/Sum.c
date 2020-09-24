//
// Created by htf on 2020/9/23.
//

#include <stdio.h>

int sum(int count, ...);

int main() {
    printf("sum = %d\n", sum(3, 11, 22, 33));
    return 0;
}

int sum(int count, ...) {
    int *addr = &count + 2;
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += *(addr + i * 2);
    }
    return sum;
}