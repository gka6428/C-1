// 전역 변수를 extern을 이용하여 서로 연결하는 방법에 대해 알아보자.
// 이때, ch12_linkage1.c, ch12_linkage2.c는 서로 같은 경로에 위치해야 한다.
# include <stdio.h>

int all_files;
static int this_file; // 전역 변수에 static 시 ch12_linkage2.c 및 그 어떤 외부 파일에서 extern을 통해 this_file를 써먹을 수 없게 한다.
extern void sub(); // ch12_linkage2.c에 있는 함수 sub() 참조

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}