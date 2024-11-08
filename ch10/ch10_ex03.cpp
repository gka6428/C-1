# include <stdio.h>

int main(void)
{
    int x=10, y=20;
    int *p;

    p = &x;
    printf("p = %p \n", p);
    printf("*p = %u \n\n", *p);
    
    // 이때부터는 x의 Left value가 아니라 y의 Left value를 p의 Right value에 저장한다.
    // 따라서 x의 주소는 소멸한다.
    p = &y; 
    printf("p = %p \n", p);
    printf("*p = %u \n\n", *p);
    return 0;
}