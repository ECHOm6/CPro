#include<stdio.h>

int main() {
    void mp(int *p,int n);
    int a[6]={12,34,5,6,87,23};

    printf("maopao a[6]:\n");
    mp(a,6);
    for (int i = 0; i < 6; ++i) {
        printf("%d ",a[i]);
    }

    return 0;
}
void mp(int *p,int n){
    void swap(int *p1,int *p2);
    printf("maopao loading...\n");
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-1-i; ++j) {
            if(*(p+j)<*(p+j+1))swap(p+j,p+j+1);
        }
    }
}
void swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
