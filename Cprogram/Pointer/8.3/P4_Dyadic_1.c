#include<stdio.h>
void average(float *p, int n);
void search(float (*p)[4], int n);       //ָ�������ָ�����β�
void allavg(float (*p)[4], int n, int m);
int main() {

    float a[3][4] = {{1, 3, 5, 7},
                     {2, 4, 6, 8},
                     {1, 1, 2, 5}};
    float b[4] = {1, 2, 3, 4};

    /**
     * ָ�������ά���飺
     * @����ʵ�����βεĻ�����һ����---------------------------------
     */
     average(*a,12); //�˴�*(a+0)��д��a,aָ��a[0][0]
//     search(a,2);    //�˴�a��д��*a,*aָ��a[0]
    allavg(a, 3, 4);
    return 0;
}

void average(float *p, int n) {       //����������ƽ��ֵ
    float *p_end, aver, sum = 0;
    p_end = p + n - 1;
    for (; p <= p_end; p++) {
        sum += (*p);
    }
    aver = sum / n;
    printf("this is avger:%5.2f\n", aver);
}

void allavg(float (*p)[4], int n, int m) {
    int sum, arr[3] = {};      //��C���Զ��������ҲҪ���䳤�ȣ���Ȼֻ�ܴ洢һ������
    sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += *(*(p + i) + j);
        }
        arr[i] = sum;
        sum = 0;
    }
    for (int i = 0; i < n; i++) {
        printf("No.%d student avg:%d\n", i, arr[i]);
    }
    /* printf("%dͬѧ%d��ƽ���ɼ�:\n",n,m);
     for (int i = 0; i < n; ++i) {
         printf("No.%d avg:%0.2f\n",i+1,arr[i]);
     }*/
}

void search(float (*p)[4], int n) {  //�����һ��һλ��������ֵ
    for (int i = 0; i < 4; ++i) {
        printf("%0.2f\n", *(*(p + n) + i));
    }
}
