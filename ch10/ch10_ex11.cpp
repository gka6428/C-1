// 포인터와 배열의 관계 (1) - Base Address
#include <stdio.h>

int main(void)
{
    int a[] = { 10, 20, 30, 40, 50 };

    printf("&a[0] = %u\n", &a[0]);
    printf("&a[1] = %u\n", &a[1]);
    printf("&a[2] = %u\n", &a[2]);


    //이때 a를 Base Address라 하며, 기본적으로 포인터이기 때문에 &를 붙이지 아니한다.
    printf("a = %u\n", a);
    return 0;
}
