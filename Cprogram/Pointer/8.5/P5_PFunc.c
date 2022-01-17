#include <stdio.h>

int max(int x, int y);

int main() {

    int (*p)(int, int), c, a = 1, b = 2;
    p = max;
    c = (*p)(a, b);
    printf("a and b is max:%d\n", c);
    return 0;
}

int max(int x, int y) {
    int z;
    x > y ? z = x : (z = y);
    return z;
}