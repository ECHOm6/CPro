/**
 * @ͨ��ָ����������
 */

#include "stdio.h"
int main() {
    char *s,str[]="hello world!";
    s=str;
    /**
     *  %s������������ַ���
     *  %c��������ַ�
     *
     *  �ַ������鳤��ӦΪʵ���ַ�����+1
     *  ���һ��Ԫ��Ϊ \0,��־�ַ����Ľ���
     *
     */
    printf("%s\n",str);
    printf("%c\n",str[7]);

    printf("%c\n",*(s+7));

    /**
     * �ַ�������
     * �Ż������P5_1_copystr.c
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

