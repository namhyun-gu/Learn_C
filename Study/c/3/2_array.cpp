#include <stdio.h>

int main() {
	int NumberArray[5] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < sizeof(NumberArray) / sizeof(NumberArray[0]); i++) {
		printf("%d\n", NumberArray[i]);
	}

	char name[] = "ABC";
	char name2[4] = "ABC";
	char name3[] = { 'A', 'B', 'C', '\0' };

	printf("%s\n", name);
	printf("%s\n", name2);
	printf("%s\n", name3);

	return false;
}