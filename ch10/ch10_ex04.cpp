# include <stdio.h>

int main(void)
{
    int i = 10;
    int *p;

    p = &i;
    printf("i = %d \n", i);

    // 왜 i의 값이 바뀌는지 생각해보자.
    *p = 20;
    printf("i = %d \n", i);

    return 0;
}