# include <stdio.h>

int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else 
		result = num1 / num2;

	printf("결과: %f \n", result);
	return 0;
}