#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a > b) {
		printf("A�� B���� ũ��\n");
	}
	else {
		printf("A�� B���� �۴�\n");
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
		printf("A �Ǵ� B�� 0���� ũ��\n");
	}
	else if (a > 0 && b > 0) {
		printf("A,B �� �� 0���� ũ��\n");
	}
	else if (!(a > 0 && b > 0)) {
		printf("A,B �� �� 0���� ũ�� �ʴ�\n");
	}

	return false;
}