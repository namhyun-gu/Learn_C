#include <stdio.h>

int main() {
	int i = 0;
	while (i < 10) {
		printf("%d\n", i);
		i++;
	}

	i = 0;
	do {
		printf("%d\n", i);
		i++;
	} while (i < 10);

	for (int i = 0; i < 10; i++) {
		printf("%d\n", i);
	}

	return false;
}