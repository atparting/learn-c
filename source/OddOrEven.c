//
// Created by htf on 2020/9/22.
//

#include<stdio.h>

int main() {
//    setbuf(stdout, NULL);
    int num;
    while (1) {
        printf("请输入一个数字：");
        fflush(stdout);
        scanf("%d", &num);
        num % 2 ? printf("奇数\n") : printf("偶数\n");
        if (num == 886) {
            break;
        }
    }
    return 0;
}
