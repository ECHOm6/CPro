/**
 * @指针的定义和使用
 */

#include "stdio.h"
int main(){
    /**
     * @ *p1 定义指针
     * 指针变量存的是地址，不可将数值赋值给指针变量
     * 赋值数值前提指针已经指向一个地址
     */
    int *p1,a=1;
    p1=&a;
    printf("p1=%p\n",p1);
    printf("*p1=%d\n",*p1);
    printf("a=%d\n",a);
    return 0;
}
