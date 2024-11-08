# include <stdio.h>

in main(void)
{
    int i = 3000;
    int *p = NULL; // NULL : 아무것도 가리키지 않음. 이는 추후에 알아가도록!

    p = &i;

    printf("p = %p \n", p);
    printf("&i = %p \n", &i);
    printf("i = %d \n", i);
    printf("*p = %p \n", *p);

    return 0;
}