#include "stdio.h"

int main(int argc,char *argv[]) {       //argcΪ����������argvΪ�β�����
    while(argc-->1){
        printf("%s\n",*++argv);
    }
    return 0;
}

