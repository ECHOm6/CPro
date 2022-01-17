/**
 * @通过指针引用数组
 */

#include "stdio.h"
int main() {
    char *s,str[]="hello world!";
    s=str;
    /**
     *  %s用来输出整个字符串
     *  %c输出单个字符
     *
     *  字符串数组长度应为实际字符长度+1
     *  最后一个元素为 \0,标志字符串的结束
     *
     */
    printf("%s\n",str);
    printf("%c\n",str[7]);

    printf("%c\n",*(s+7));

    /**
     * 字符串复制
     * 优化程序见P5_1_copystr.c
     */
     int i;
     char str0[20],str1[]="aaaaaa";
    for (i = 0; *(str1+i) != '\0' ; ++i) {
        *(str0+i)=*(str1+i);
    }
    *(str0+i)='\0';
    printf("str0[20]:%s",str0);
    return 0;
}

