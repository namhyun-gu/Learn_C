#include <stdio.h>

int main() {
	int A = 10;
	int *B;
	B = &A;
	*B = 20;

	printf("%d\n", A);
	printf("%d\n", *B);
	printf("%#x\n", B);

	int **C = &B;
	**C = 30;

	printf("%d\n", A);
	printf("%d\n", **C);
	printf("%#x\n", &A);
	printf("%#x\n", *C);

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

	int *intP = (int *)100;
	double *doubleP = (double *)100;
	char *charP = (char *)100;

	printf("%d %d %d\n", intP, doubleP, charP);

	intP++, doubleP++, charP++;

	printf("%d %d %d\n", intP, doubleP, charP);

	return false;
}