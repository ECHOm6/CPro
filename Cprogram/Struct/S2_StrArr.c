#include "stdio.h"

int main() {
    struct Leader{
        char name[10];
        int num;
    };
    struct Leader per[3]={"zhnagsan",0,"lisi",0,"wangwu",0};
    struct Leader *p=per;
    printf("name        num:\n");
    for (int i = 0; i < 3; ++i,p++) {
        printf("%-10s%3d\n",p->name,p->num);
    }
    return 0;
}

