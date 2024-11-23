// 그렇다면 전역 변수의 초기값과 생존 기간을 살펴보자.
# include <stdio.h>
int A;
int B;
int add()
{
    return A+B;
}

int main(void)
{
    int answer;
    A = 5;
    B = 7;
    answer = add();
    printf(" %d + %d = %d\n", A, B, answer);
    return 0;
}
// 전역 변수는 선언 시점부터 언제까지 생존하는가?
// 답 : 프로세스의 종료 시점까지.
