// 가변 매개 변수
// 함수의 호출 때마다 매개 변수의 개수가 변경될 수 있다.

#include <stdio.h>
#include <stdarg.h>
int sum( int, ... ); // 가변 매개 변수를 사용하는 함수
int main( void ) 
{
	int answer = sum( 4, 4, 3, 2, 1 );
	printf( "합은 %d입니다.\n", answer );
	return( 0 );
}
int sum( int num, ... ) 
{	int answer = 0;
	va_list argptr;
	va_start( argptr, num );
	for( ; num > 0; num-- )
		answer += va_arg( argptr, int );
	va_end( argptr );
	return( answer );
}
