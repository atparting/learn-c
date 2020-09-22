//
// Created by htf on 2020/8/24.
//

#include <stdio.h>

int main() {
    printf("char 存储大小 : %llu \n", sizeof(char));
    printf("short 存储大小 : %llu \n", sizeof(short));
    printf("int 存储大小 : %llu \n", sizeof(int));
    printf("long 存储大小 : %llu \n", sizeof(long));
    printf("float 存储大小 : %llu \n", sizeof(float));
    printf("double 存储大小 : %llu \n", sizeof(double));
    printf("long int 存储大小 : %llu \n", sizeof(long int));
    printf("long long 存储大小 : %llu \n", sizeof(long long));
    printf("long double 存储大小 : %llu \n", sizeof(long double));

    return 0;
}