// 전역 변수의 사용
# include <stdio.h>

int x;
void sub();

int main(void)
{
    for (x=0; x<10; x++) //sub()에서 x=10이 되고 나면 main함수에서의 반복문을 돌지 아니한다.
    {
        sub();
    }
}

void sub()
{
    for (x=0; x<10; x++)
    {
        printf("*");
    }
}
// 왜 그럴까? 전역 변수는 함수 외부에서 선언된 변수이기 때문이다.