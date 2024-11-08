# include <stdio.h>
# include <math.h>

struct point {
	int x;
	int y;
};

struct rec {
    struct point p1;
    struct point p2;
};


int main()
{
    struct rec r;
	int area, peri, width, height;

	printf("왼쪽 상단의 좌표를 입력하시오(x,y): ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("오른쪽 하단의 좌표를 입력하시오(x,y): ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	width = r.p2.x - r.p1.x;
    height = r.p1.y - r.p2.y;
    area = width * height;
    peri = (width + height) * 2;
    
    printf("면적은 %d이고 둘레는 %d입니다.", area, peri);

	return 0;
}

