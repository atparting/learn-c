//
// Created by htf on 2020/9/24.
//

#include <stdio.h>

enum CompareResult {
    GT, EQ, LT,
} ;

int compare(int number, int guess);

int main() {
    int number = 66;
    int guess;
    for (int i = 0; ; ++i) {
        printf("请输入一个正数：");
        fflush(stdout);
        scanf("%d", &guess);
        enum CompareResult result = compare(number, guess);
        switch (result) {
            case GT:
                printf("猜大了\n");
                break;
            case LT:
                printf("猜小了\n");
                break;
            default:
                printf("猜对了，共猜了%d次\n", i + 1);
                return 0;
        }
    }
}

int compare(int number, int guess) {
    enum CompareResult result;
    if (guess > number) {
        result = GT;
    } else if (guess < number) {
        result = LT;
    } else {
        result = EQ;
    }
    return result;
}