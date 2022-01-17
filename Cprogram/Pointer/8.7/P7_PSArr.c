#include "stdio.h"

int main() {
    char **p,*name[]={"age","price","goods"};
    for (int i = 0; i <3 ; ++i) {
        p=name+i;
        printf("%s\n",*p);
    }
    return 0;
}

