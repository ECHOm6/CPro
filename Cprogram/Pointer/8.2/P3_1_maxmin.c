#include "stdio.h"
void swap(int *p1,int *p2);
int main() {

    int *p1,*p2,a,b;
    printf("Please enter number a and b: \n");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    if(a<b)swap(p1,p2);
    printf("max=a=%d,min=b=%d\n",*p1,*p2);
    return 0;
}
void swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

