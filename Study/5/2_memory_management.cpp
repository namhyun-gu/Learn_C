#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p = (int *)malloc(sizeof(int) * 10);
	int *p2 = (int *)calloc(sizeof(int), 10);

	for (int i = 0; i < 10; i++) {
		p[i] = i;
		p2[i] = i;

		printf("p[%d] %d / p2[%d] %d\n", i, p[i], i, p2[i]);
	}

	free(p);
	free(p2);
	return false;
}