#include "stdio.h"

int main(int argc,char *argv[]) {       //argc为参数个数，argv为形参数组
    while(argc-->1){
        printf("%s\n",*++argv);
    }
    return 0;
}

