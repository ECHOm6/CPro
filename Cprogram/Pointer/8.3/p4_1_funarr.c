#include<stdio.h>

int main() {
    void inv(int arr[],int n);
    int a[10]={1,3,5,7,6,9,0,23,34,19};
    printf("this is not inv a[10]:\n");
    for (int i = 0; i <10 ; ++i) {
        printf("%d ",a[i]);
    }
    printf("\n");
    inv(a,10);
    for (int i = 0; i < 10; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}
void inv(int arr[],int n){
    int temp,m=(n-1)/2;
    printf("Inv loading...\n");
    for (int i = 0; i <= m; ++i) {
        temp=arr[i];
        arr[i]=arr[(n-1)-i];
        arr[n-1-i]=temp;
    }
}

