// 같은 이름의 전역 변수와 지역 변수가 만나면?
# include <stdio.h>
int sum = 1;

int main(void)
{
    int sum = 0;
    printf("sum = %d\n", sum);
    return 0;
}
// sum = 0이 출력된다.
// main 안에 새 함수를 추가하고 int sum = 2; 선언을 하면 sum은 어떻게 출력될까?
// 새 함수 안에서 sum을 불러올 경우, 이번에는 0이 아닌 2가 출력됨을 알 수 있다.
// 따라서, 동일한 이름의 변수를 출력할 경우, 가장 가까운 블록에서 선언된 sum을 끌고 오는 것을 볼 수 있다. 