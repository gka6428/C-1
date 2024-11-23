# include <stdio.h>
# include <stdarg.h>
int sum(int num, ...);

int main(void)
{
    int answer = sum(4, 3, 2, 1);
    printf("the sum: %d", answer);
    return 0;
}

int sum(int num, ...)
{
    int answer = 0;
    va_list argpointer;
    va_start(argpointer, num);
    for (; num > 0; num--)
        answer += va_arg(argpointer, int);
    va_end(argpointer);
    return answer;
}