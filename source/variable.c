//
// Created by htf on 2020/9/22.
//

extern int x;
extern int y;

void swap() {
    int temp = x;
    x = y;
    y = temp;
}

int incrementAndGet() {
    static int num = 1;
    return num++;
}