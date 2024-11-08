# include <stdio.h>

int main(void)
{
    int i = 10;
    double f = 12.3;
    int* pi = NULL;

    double* pf =  NULL;
    pi = &i;
    pf = &f;

    /*포인터 변수 pi 및  pf와 &i 및 &f와는 어떠한 차이가 있을까?*/
    printf("%p %p \n", pi, &i);
    printf("%p %p \n", pf, &f);
    return 0;
}