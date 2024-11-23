// 전역 변수의 초기값은 무엇인가? 쓰레기값인가?
# include <stdio.h>
int counter;

int main(void)
{
    printf("counter = %d\n", counter);
    return 0;
}

// 출력시 값이 0이 나옴을 알 수 있다.
// 전역 변수는 따로 설정하지 않는 경우에 초기값은 0이다.