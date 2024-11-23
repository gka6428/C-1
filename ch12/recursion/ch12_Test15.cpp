// 십진수 입력시 2진수로 출력하기
# include <stdio.h>

void print_binary(int x);

int main(void)
{
    print_binary(132);
    printf("\n");
    return 0;
}

void print_binary(int x)
{
    if (x > 0)
    {
        print_binary(x / 2); // 재귀호출
        printf("%d", x % 2); // 나머지 출력
    }
}