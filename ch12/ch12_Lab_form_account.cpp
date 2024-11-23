// Lab:은행 계좌의 간단한 구현
/*
돈만 생기면 저금하는 사람을 가정하자. 
이 사람을 위한 함수 save(int amount)를 작성하여  보자. 
이 함수는 저금할 금액을 나타내는 인수 amount만을 받으며 save(100)과 같이 호출된다. 
save()는 정적 변수를 사용하여 현재까지 저축된 총액을 기억하고 있다.
*/
#include <stdio.h>

// amount가 양수이면 입금이고 음수이면 출금으로 생각한다. 
void save(int amount)
{
    static long balance = 0;

    if (amount >= 0)
        printf("%d \t\t", amount);
    else
        printf("\t %d \t", -amount);

    balance += amount;
    printf("%d \n", balance);
}

int main(void) {
    printf("==============================\n");
    printf("입금 \t출금\t 잔고\n");
    printf("==============================\n");
    save(10000);
    save(50000);
    save(-10000);
    save(30000);
    printf("==============================\n");
    return 0;
}
