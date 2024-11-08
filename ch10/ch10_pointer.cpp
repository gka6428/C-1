
/*
모든 변수는 Left Value와 Right Value를가짐
1. 일반 변수
    자신의 Right Value를 데이터(정수 실수 문자 문자열 등)로 가짐
    자신의 Left Value는 포인터(주소)

    무슨 말일까?
    int value = 10;
    int : 변수 선언, 메모리는 이것부터 읽어 몇 Byte를 할당해줄건지 결정.
    value : 변수의 식별자를 지정
    10; : 내용물


    value 식별자
    Left Value | Right Value
    0x001 | 10

    이때 Left Value, 즉 0x001을 주소, 포인터라 한다.

2. 포인터 변수
    자신의 Right Value를 일반변수의 Left Value(Pointer)를 저장.
    다른 놈의 주소를 담아두는 변수로서의 역할
    자신의 Left Value는 포인터(주소)

    선언 방법
    int *pVal = &value
    포인터 변수 pVal의 Right Value에 일반션수의 Left Value를 저장 혹은 assign

    * : de-reference 연산자, *[포인터변수]로 표기**
    & : Address of 연산자를 의미, &[일반변수] 는 [일반변수]의 Left Value를 의미한다.

    ** 반드시 그렇다는건 아님. 이중 삼중 포인터가 있으므로..

    복사하기엔 메모리가 아까움
    함수

    주의점
    타입이 다르면 문제될 수 있음
    char pointer는 char 자료형을 담아야 한다. 컴파일 시 문제 생김.

3.
    1) 변수의 값 바꾸는 방법
    int value = 10;
    value = 9;

    2) 포인터로도 가능하다는 걸 알아야 한다.
    int value = 10;
    int *pVal = &value;
    *pVal = 9;

    2번 방법은 클래스의 캡슐화, 함수의 매개변수 전달 등등에서 써먹기에 중요하다.
*/

#include <stdio.h>

int main(void)
{
	int* pi = NULL;
	char* pc = NULL;
	double* pd = NULL;

	int num = 10;
	char val = 'A';
	double drum = 10.5;

	pi = &num;
	pc = &val;
	pd = &drum;

	printf("pi=%d num=%d \n", *pi, num);
	printf("pc=%c val=%c \n", *pc, val);
	printf("pd=%lf drum=%lf \n", *pd, drum);

	return 0;
}