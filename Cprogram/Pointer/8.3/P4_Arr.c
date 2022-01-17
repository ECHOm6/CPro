/**
 * @指向数组的指针
 */

#include "stdio.h"
int main(){
      int *p,i,a[10]={1,2,3,4,5,6,7,8,9,0};

    for (i = 0; i < 10; ++i) {
        printf("%d\n",*(a+i));
    }
    printf("\n");

  /*  for (i = 0; i < 10; ++i,++p) {
        printf("%d\n",*p);
    }*/
    printf("\n");
    /**
     * p=a即指向数组首地址
     * ++p不是地址加1字节，而是加对应指针类型字节数（如int，++p则表示地址加4字节）
     * 注意在for循环中p++后，
     * 下次再通过指针需初始化（如开始p=a，for循环后续p=a）
     * 指针法执行效率高
     */
    for (p = a; p <(a+10) ; ++p) {
        printf("%d\n",p);
    }
}
