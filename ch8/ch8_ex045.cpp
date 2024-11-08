# include <stdio.h>
# include <math.h>

struct date {
	int year;
	int month;
	int day;
};

struct student {
	int number;
	char name[10];
	struct date dob;
	double grade;
};

int main()
{
	struct student s1;
	
	s1.dob.year = 1983;
	s1.dob.month = 03;
	s1.dob.day = 29;

	return 0;
}

