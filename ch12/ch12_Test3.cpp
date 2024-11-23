// 매개변수도 지역변수의 일종이다.
// 지역 변수와의 차이점: 매개변수는 선언 뒤 함수 호출시의 인수 값으로 초기화된다는 점에서 차이가 있다. 
# include <stdio.h>
void inc(int counter);

int main(void)
{
	int i;

	i = 10;
	printf("함수 호출 전 i=%d\n", i);
	inc(i); // i값이 증가하지 않는 이유는 무엇인지 설명해 보아라.
	printf("함수 호출 후 i=%d\n", i);
	return 0;
}

void inc(int counter)
{
	counter++;
}