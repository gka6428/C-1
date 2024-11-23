// 하노이의 탑을 구현하자.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to);

int main(void)
{
    hanoi_tower(4, 'A', 'B', 'C');
}

void hanoi_tower(int n, char from, char tmp, char to)
{
    if (n == 1)
        printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to); // from에서 to로 원판을 옮긴다.
    else
    {
        hanoi_tower(n - 1, from, to, tmp);
        printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to); // from에 있는 한 개의 원판을 to로 옮긴다.
        hanoi_tower(n - 1, tmp, from, to);
    }
}