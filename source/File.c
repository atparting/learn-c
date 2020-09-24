//
// Created by htf on 2020/9/24.
//

#include <stdio.h>
#include <stdlib.h>

void write(char *fileName);
void read(char *fileName);
char* readAll(char *fileName);

int main() {
    char fileName[] = "test.txt";
    write(fileName);
    read(fileName);

    char *fileContent = readAll(fileName);
    printf("fileContent:\n%s\n", fileContent);
    free(fileContent);
    return 0;
}

void write(char *fileName) {
    FILE *fp = fopen(fileName, "w");
    if (fputc('c', fp) == EOF) {
        fprintf(stderr, "写入文件失败");
    }
    if (fputs("Hello\nWorld\n", fp) == EOF) {
        fprintf(stderr, "写入文件失败");
    }
    if (fclose(fp) == EOF) {
        fprintf(stderr, "关闭文件失败");
    }
}

void read(char *fileName) {
    FILE *fp = fopen(fileName, "r");

    char c = (char) fgetc(fp);
    printf("fgetc = %c\n", c);

    char buf[6];
    fgets(buf, 6, fp);
    printf("buf = %s\n", buf);

    if (fclose(fp) == EOF) {
        fprintf(stderr, "关闭文件失败");
    }
}

char* readAll(char *fileName) {
    FILE *fp = fopen(fileName, "r");
    int size = 10;
    char *fileContent = malloc(size * sizeof(char));
    for (int i = 0; ; i++) {
        if (i > size) {
            size *= 2;
            fileContent = realloc(fileContent, size * sizeof(char));
        }
        int c = fgetc(fp);
        if (c == EOF) {
            fileContent[i] = '\0';
            break;
        }
        fileContent[i] = (char) c;
    }
    return fileContent;
}