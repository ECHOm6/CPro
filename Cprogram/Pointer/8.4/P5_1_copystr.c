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
     * ��    while(*q!='\0') *p++=*q++;
     *      *p='\0';
     *
     * ��   while((*p++ =*q++) !='\0');��ʱ'\0'�Ѿ����Ƹ�*p,�жϵ��ں��˳�����ʱ'\0'��ASCII��Ϊ0�����Զ�תΪfalse
     * �Ż���Ϊ����
     */
    while (*p++=*q++);

}