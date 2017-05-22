#include <stdio.h>

void showArray(int *array, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", array[i]);
	}
}

int main() {
	int a, b, c;

	int *pArray[] = { &a, &b, &c };

	int *pa = &a, *pb = &b, *pc = &c;
	int *pArray2[] = { pa, pb, pc };

	int Array[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < sizeof(Array) / sizeof(Array[0]); i++) {
		printf("%#x\n", &Array[i]);
	}

	int *p = Array;
	for (int i = 0; i < 5; i++) {
		printf("%d\n", p[i]);
	}

	int *p2 = &Array[2];
	printf("%d\n", *p2);
	printf("%d\n", *(p2 + 1));
	printf("%d\n", *(p2 + 2));
	printf("%d\n", *(p2 - 1));
	printf("%d\n", *(p2 - 2));

	showArray(Array, sizeof(Array) / sizeof(Array[0]));
	return false;
}