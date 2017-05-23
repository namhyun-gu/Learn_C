#include <stdio.h>

int main() {
	int *intP = (int *)100;
	double *doubleP = (double *)100;
	char *charP = (char *)100;

	printf("%d %d %d\n", intP, doubleP, charP);

	intP++, doubleP++, charP++;

	printf("%d %d %d\n", intP, doubleP, charP);

	return false;
}