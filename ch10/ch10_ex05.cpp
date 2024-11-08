// 포인터의 증감 연산에 대해 실습한다.
# include <stdio.h>

int main(void)
{
    char *pc;
    int *pi;
    double *pd;
    
    // 각 포인터들의 메모리 위치를 설정.
    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;
    printf(" pc=%u, pc+1=%u, pc+2=%u \n", pc, pc+1, pc+2);
    printf(" pc=%u, pc+1=%u, pc+2=%u \n", pc, pc+1, pc+2);
    printf(" pc=%u, pc+1=%u, pc+2=%u \n", pc, pc+1, pc+2);

    return 0;
}