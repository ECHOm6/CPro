#include "stdio.h"

int main() {
    struct Student{
        int stu_id;
        char name[20];
        char sex;
    }    a= { 20193511,"daipan",'M'};
    printf("a.id:%d",a.stu_id);
    return 0;
}

