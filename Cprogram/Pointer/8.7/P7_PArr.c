#include "stdio.h"
#include "string.h"     //引入操作字符串库
int main() {
    void sort(char *name[], int n);   //定义排序函数
    void print(char *name[], int n);  //定义输出函数
    char *name[] = {"C program", "C plus", "java yyds"};    //初始化指针数组
    int n = 3;
    sort(name, n);
    print(name, n);
    return 0;
}

void sort(char *name[], int n) {
    char *temp;
    int k;
    for (int i = 0; i < n - 1; ++i) {
        k = i;
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(name[k], name[j]) > 0)k = j;
            /**
             * strcmp(A,B)函数：
             * 若A字符串大于B     则返回值 为正数
             *若A字符串小于或等于B  则返回值 为负数
             */

        }
        if (k != i) {
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }
    }
}

void print(char *name[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%s\n",name[i]);
    }
}

