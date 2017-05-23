#include <stdio.h>

int main() {
	printf("Hello World!\n");

	int value;
	scanf_s("%d", &value);
	printf("%d\n", value);

	char name[50];
	scanf_s("%s", &name, sizeof(name));
	printf("%s\n", name);

	return false;
}