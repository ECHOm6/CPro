#include "stdio.h"
struct Stu{

    int sorce;
    struct Stu *next;  //指向下一个结点地址
};
int main(int argc, char *argv[]) {
    struct Stu a,b,c,*head,*p;
    a.sorce=10,b.sorce=20,c.sorce=30;
    a.next=&b,b.next=&c,c.next=NULL;
    head=&a;
    p=head;
    printf("score next_address\n");
    do{
        printf("%5d %5d\n",p->sorce,p->next);
        p=p->next;
    } while (p!=NULL);
    return 0;
}
