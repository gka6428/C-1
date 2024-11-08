# include <stdio.h>

int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i=%d, pi=%p \n", i, pi);

	(*pi)++; // de-reference of pi, pi가 Right Value에 담았던 주소를 보고, 해당 주소로 이동해 Right Value를 가져온다.
	printf("i=%d, pi=%p \n", i, pi);

	*pi++; // same to *(p+1)
	printf("i=%d, pi=%p \n", i, pi);
}