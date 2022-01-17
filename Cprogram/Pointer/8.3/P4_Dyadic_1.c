#include<stdio.h>
void average(float *p, int n);
void search(float (*p)[4], int n);       //指向数组的指针作形参
void allavg(float (*p)[4], int n, int m);
int main() {

    float a[3][4] = {{1, 3, 5, 7},
                     {2, 4, 6, 8},
                     {1, 1, 2, 5}};
    float b[4] = {1, 2, 3, 4};

    /**
     * 指针操作多维数组：
     * @考虑实参与形参的基类型一致性---------------------------------
     */
     average(*a,12); //此处*(a+0)不写成a,a指向a[0][0]
//     search(a,2);    //此处a不写成*a,*a指向a[0]
    allavg(a, 3, 4);
    return 0;
}

void average(float *p, int n) {       //求整个数组平均值
    float *p_end, aver, sum = 0;
    p_end = p + n - 1;
    for (; p <= p_end; p++) {
        sum += (*p);
    }
    aver = sum / n;
    printf("this is avger:%5.2f\n", aver);
}

void allavg(float (*p)[4], int n, int m) {
    int sum, arr[3] = {};      //在C语言定义空数组也要给其长度，不然只能存储一个数据
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
    /* printf("%d同学%d科平均成绩:\n",n,m);
     for (int i = 0; i < n; ++i) {
         printf("No.%d avg:%0.2f\n",i+1,arr[i]);
     }*/
}

void search(float (*p)[4], int n) {  //求最后一个一位数组所有值
    for (int i = 0; i < 4; ++i) {
        printf("%0.2f\n", *(*(p + n) + i));
    }
}
