# include <stdio.h>
# include <string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s;
	s.number = 20230001;
	strcpy(s.name, "홍길동");
	s.grade = 4.1;

	printf("\n학번: %d\n", s.number);
	printf("\n이름: %s\n", s.name);
	printf("\n학점: %2f\n", s.grade);

	return 0;
}