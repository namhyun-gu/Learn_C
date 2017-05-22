#include <stdio.h>

int main() {
	int a, b;
	int *whereA = &a, *whereB = &b;
	if (whereA > whereB) {
		printf("A는 B 뒤에 있다\n");
	}
	else {
		printf("A는 B 앞에 있다\n");
	}

	if (!whereA == NULL) {
		printf("A는 집이 있다\n");
	}
	return false;
}