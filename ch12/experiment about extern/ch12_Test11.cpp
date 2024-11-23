// extern은 블록에서 전역 변수에 접근할 때도 사용됨.
# include <stdio.h>

int x = 50;

int main(void)
{
    int x = 100;
    {
        extern int x; 
        printf("x= %d\n", x);
    }
    return 0;
}