#include "stdio.h"
#include "string.h"     //��������ַ�����
int main() {
    void sort(char *name[], int n);   //����������
    void print(char *name[], int n);  //�����������
    char *name[] = {"C program", "C plus", "java yyds"};    //��ʼ��ָ������
    int n = 3;
    sort(name, n);
    print(name, n);
    return 0;
}

void sort(char *name[], int n) {
    char *temp;
    int k;
    for (int i = 0; i < n - 1; ++i) {
        k = i;
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(name[k], name[j]) > 0)k = j;
            /**
             * strcmp(A,B)������
             * ��A�ַ�������B     �򷵻�ֵ Ϊ����
             *��A�ַ���С�ڻ����B  �򷵻�ֵ Ϊ����
             */

        }
        if (k != i) {
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }
    }
}

void print(char *name[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%s\n",name[i]);
    }
}

