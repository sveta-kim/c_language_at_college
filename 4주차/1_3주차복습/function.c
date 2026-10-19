double funcA(int width, int height) {
	return width * height / 2;
}

int funcB(void) {
	int width = 0, height = 0;
	printf("밑변과 높이 입력 : ");
	scanf("%d, %d", &width, &height);
	return width * height;
}

void funcC(double radius) {
	printf("원의 넓이 : %lf\n", radius * radius * 3.14);
}