#include <stdio.h>

int main() {
	int a, b;
	int *whereA = &a, *whereB = &b;
	if (whereA > whereB) {
		printf("A�� B �ڿ� �ִ�\n");
	}
	else {
		printf("A�� B �տ� �ִ�\n");
	}

	if (!whereA == NULL) {
		printf("A�� ���� �ִ�\n");
	}
	return false;
}