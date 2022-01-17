#include "stdio.h"
int swap(int *p,int n);
int inv(int *p1,int *p2);
int main() {
    int arr[3],*p;
    printf("please enter three numbers:");
    for (int i = 0; i < 3; ++i) {
        scanf("%d",&arr[i]);
    }
    p=arr;
    swap(p,3);
    for (int i = 0; i < 3; ++i) {
        printf("%d ",*(p+i));
    }
    return 0;
}
int swap(int *p,int n){
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n-i+1; ++j) {
            if(*(p+i)>*(p+j))inv(p+i,p+j);
        }
    }
}
int inv(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

