#include <stdio.h> 

int main(void) 
{ 
    int i; 

    for(i = 0;i < 5; i++) 
    { 
        int temp = 1; // temp의 변화를 살피자.
        printf("temp = %d\n", temp); 
        temp++; 
	   }
	   return 0;
}
