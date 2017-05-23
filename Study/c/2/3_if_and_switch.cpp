#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a > b) {
		printf("A는 B보다 크다\n");
	}
	else {
		printf("A는 B보다 작다\n");
	}

	int c;
	scanf_s("%d", &c);
	switch (c) {
	case 0:
		printf("%d\n", a + b);
		break;
	case 1:
		printf("%d\n", a - b);
		break;
	case 2:
		printf("%d\n", a * b);
		break;
	case 3:
		printf("%d\n", a / b);
		break;
	}

	if (a > 0 || b > 0) {
		printf("A 또는 B가 0보다 크다\n");
	}
	else if (a > 0 && b > 0) {
		printf("A,B 둘 다 0보다 크다\n");
	}
	else if (!(a > 0 && b > 0)) {
		printf("A,B 둘 다 0보다 크지 않다\n");
	}

	return false;
}