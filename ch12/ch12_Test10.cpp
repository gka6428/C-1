// 저장 유형 지정자(volatile)
// volatile 지정자는 하드웨어가 수시로 변수의 값을 변경하는 경우에 사용된다

# include <stdio.h>
volatile int io_port;

void wait(void)
{
    io_port = 0;
    while (io_port != 255)
        ;
}
// volatile로 지정하면 컴파일러는 최적화를 중지하게 된다. 
