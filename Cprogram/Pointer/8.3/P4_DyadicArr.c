#include<stdio.h>

int main() {
    int *p, a[3][4] = {{1, 3, 5, 7},
                       {2, 4, 6, 8},
                       {1, 1, 2, 5}};
//    printf("p ָ��ָ��ĵ�ַ:%d\n",*p);//��ʹ��ָ��ǰ����ָ��ָ��һ�������ַ������������0xc0000005
    printf("%d,%d\n", a, *a);               //0����ʼ��ַ 0��0��Ԫ�ص�ַ
    printf("%d,%d\n", a[0], *(a + 0));        //0��0��Ԫ�ص�ַ
    printf("%d,%d\n", &a[0], &a[0][0]);     //0����ʼ��ַ 0��0��Ԫ�ص�ַ

    printf("%d,%d\n", a[1], a + 1);               //1��0��Ԫ�ص�ַ 1����ʼ��ַ
    printf("%d,%d\n", &a[1][0], *(a + 1) + 0);      //1��0��Ԫ�ص�ַ

    printf("%d,%d\n", a[2], *(a + 2));             //2��0��Ԫ�ص�ַ 2����ʼ��ַ
    printf("%d,%d\n", &a[2], a + 2);               //2����ʼ��ַ

    printf("%d,%d\n", a[1][0], *(*(a + 1) + 0));           //1��0��Ԫ�ص�ֵ
    printf("%d,%d\n", *a[2], *(*(a + 2) + 0));               //2��0��Ԫ�ص�ֵ
    return 0;
}
