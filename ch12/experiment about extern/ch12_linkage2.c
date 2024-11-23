extern int all_files; // ch12_linkage1.c에 있는 전역 변수를 참조

// extern int this_file; // 오류 발생

void sub(void)
{
    all_files = 10;
}