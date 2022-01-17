/**
 * @指针作为函数参数
 */

#include "stdio.h"
int main(){
    void swap(int *p1);

    int *p1,*p2,a=2;
    int b[3]={1,2,3};
    p1=&a;
    p2=b;
    swap(p1);

}
void swap(int *p){
    int *q;
    q=&*p;
    printf("*p=%d\n",*p);
    printf("p=%p\n",p);
    printf("q=%p\n",q);
    printf("*q=%d\n",*q);
}


