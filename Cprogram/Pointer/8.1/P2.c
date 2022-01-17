/**
 * @指针的运算
 */

#include "stdio.h"
int main(){
    int *p1,*p2,a=1,b=2;
    p1=&a;
    p2=&b;
    printf("*p1=%d\n",*p1);
    printf("*p2=%d\n",*p2);
    printf("p2=%d\n",p2);
    printf("++p2=%d\n",++p2);
    printf("*p1=%d *&a=%d\n",*p1,*&a);
    /**
     * (*p2)++等同b++,若不加括号则为指向的地址++
     */
    printf("*p2=%d ++(*p2)=%d\n",*p2,++(*p2));
    printf("*p2=%d *(p2+1)=%d\n",*p2,*(p2+1));
    printf("%d",*p2);
}