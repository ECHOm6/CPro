#include "stdio.h"
#include "stdlib.h"
#define LEN sizeof(struct Stu)
struct Stu{
    int num;
    struct Stu *next;
};

int main(int argc, char *argv[]) {
    struct Stu *creat(),*pt;
    pt=creat();
    printf("%ld\n",pt->num);
    return 0;
}
struct Stu *creat(){
    struct Stu *head,*p1,*p2;
    int n=0;
    p1=p2=(struct Stu *) malloc(LEN);
    scanf("%ld",&p1->num);
    while (p1->num!=0){
        n++;
        if(n==1){
            head=p1;
        }
        p2->next=p1;
        p1=(struct Stu *) malloc(LEN);
        scanf("%ld",&p1->num);
    }
    p2->next=NULL;
    return head;

}