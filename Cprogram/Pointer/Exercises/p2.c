#include "stdio.h"
#include "string.h"

void sort(char *p,int n);
int main() {
    char c[3];
    printf("Please enter the three strings:");
    for (int i = 0; i < 3; ++i) {
        scanf("%s",&c[i]);
    }

    sort(c,3);
    for (int i = 0; i < 3; ++i) {
        printf("%s\n",c[i]);
    }
    return 0;
}
void sort(char *p,int n){
    char *temp;
    int k;
    for (int i = 0; i < n-1; ++i) {
        k=i;
        for (int j = i+1; j < n; ++j) {
            if(strcmp(c[k],c[j])>0)k=j;
        }
        if(k!=i){
            temp=c[i];
            c[i]=c[k];
            c[k]=temp;
        }
    }
}

