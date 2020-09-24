//
// Created by htf on 2020/9/23.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *pf;
    pf = fopen("unExist.txt", "rb");
    if (pf == NULL) {
        fprintf(stderr, "错误号: %d\n", errno);
        fflush(stderr);
        perror("通过 perror 输出错误");
        fprintf(stderr, "打开文件错误: %s\n", strerror(errno));
    } else {
        fclose(pf);
    }
    return 0;
}