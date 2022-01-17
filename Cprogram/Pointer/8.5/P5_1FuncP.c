#include <stdio.h>

int my_max(int, int);

int my_min(int, int);

int my_avg(int, int);

void fun(int, int, int (*p)(int, int));

int main() {
    int x = 12, y = 22;
    fun(x, y, my_max);
    fun(x, y, my_min);
    fun(x, y, my_avg);
    return 0;
}

void fun(int x, int y, int (*p)(int, int)) {
    int result;
    result = (*p)(x, y);
    printf("%d\n", result);
}

int my_max(int x, int y) {
    int z;
    x > y ? (z = x) : (z = y);
    printf("max:");
    return z;
}

int my_min(int x, int y) {
    int z;
    x > y ? (z = y) : (z = x);
    printf("min:");
    return z;
}

int my_avg(int x, int y) {
    int z;
    z = (x + y) / 2;
    printf("x y is avg:");

}

