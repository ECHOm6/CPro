#include "stdio.h"

int main() {
    void copy_str(char *p,char *q);
    char str1[]="I Love C Program Plus!",str[]="hello world!";
    printf("str copy before:%s\n",str);
    copy_str(str,str1);
    printf("str copy after:%s\n",str);
    return 0;
}
void copy_str(char *p,char *q){
    printf("copy loading...\n");
    /**
     * ①    while(*q!='\0') *p++=*q++;
     *      *p='\0';
     *
     * ②   while((*p++ =*q++) !='\0');此时'\0'已经复制给*p,判断等于后退出，此时'\0'的ASCII码为0，可自动转为false
     * 优化后即为下述
     */
    while (*p++=*q++);

}