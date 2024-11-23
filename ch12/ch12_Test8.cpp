// 저장 유형 지정자(static)
#include <stdio.h>

void sub() {

    static int scount = 0; // static 지정시 지역 변수는 전역 변수로 설정된다.
    int acount = 0;
    printf("scount = %d\t", scount);

    printf("acount = %d\n", acount);
    scount++;
    acount++;
}

int main(void) {
    sub();
    sub();
    sub();
    return 0;
}
