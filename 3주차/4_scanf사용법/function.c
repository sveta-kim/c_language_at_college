#define PHI 3.14

void funcA(void) {

	int width = 0, height = 0;

	printf("밑변과 높이를 입력하시오: ");
	scanf("%d, %d", &width, &height);

	printf("삼각형의 넓이는 %lf 입니다.\n", width * height / 2.0);
}

void funcB(void) {

	int width = 0, height = 0;
	double area = 0;

	printf("밑변 길이를 입력하시오: ");
	scanf("%d", &width);

	printf("높이를 입력하시오: ");
	scanf("%d", &height);

	area = width * height;

	printf("직사각형의 넓이는 %lf 입니다.\n", area);
}

void funcC(void) {
	int radius = 0;

	printf("반지름 길이를 입력하시오: ");
	scanf("%d", &radius);

	printf("원의 넓이는 %lf 입니다.\n", radius * radius * PHI);
}