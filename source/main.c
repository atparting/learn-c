#include <stdio.h>

int x = 1;
int y = 2;

void swap();
int incrementAndGet();

int main() {
    printf("Hello, World!\n");

    printf("x = %d, y = %d\n", x, y);
    swap();
    printf("x = %d, y = %d\n", x, y);

    printf("incrementAndGet = %d\n", incrementAndGet());
    printf("incrementAndGet = %d\n", incrementAndGet());
    return 0;
}
