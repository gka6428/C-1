// 유클리드의 호제법을 이용한 최대공약수 구하기
# include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    printf("%d\n", gcd(30, 20));
}

// 이때, x > y이어야 한다.
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, (x % y));
}