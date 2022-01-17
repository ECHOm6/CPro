#include "stdio.h"

int main() {
    float score[][4] = {{70, 88, 100, 90},
                      {78, 67, 56,  88},
                      {77, 98, 70,  69}};
    float k, *p;
    float *search(float (*pointer)[4], int n);
    printf("Please enter the student ID to be checked:");
    scanf("%f", &k);
    printf("The results of each subject of the %f student:\n", k);
    p = search(score, k);
    for (int i = 0; i < 4; ++i) {
        printf("%f ", *(p + i));
    }

    return 0;
}

float *search(float (*pointer)[4], int n) {
    float *ret;
    ret = *(pointer + n);
    return ret;
}

