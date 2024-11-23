// 함수 앞에서의 static의 기능.
# include <stdio.h>

// extern void f1(); // f1()이 static 지정이 되어 있어 extern 불가
extern void f2(); // ch12_sub.c에 있는 f2() 함수를 참조.

int main(void)
{
    f2();
    return 0; 
}