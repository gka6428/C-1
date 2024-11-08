# include <stdio.h>

int main(void)
{
    int data = 0x0A0B0C0D;
    char *pc;
    int i;
    // 포인터의 형 변환, "꼭 필요한" 경우에 명시적으로 포인터의 타입 변경이 가능하다.
    pc = (char *)&data;
    for (i=0; i<4; i++) {
        printf("*(pc + %d)= %02X \n", i, *(pc+1));
    }
    return 0;
}