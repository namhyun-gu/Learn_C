#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

#define A 3
#define B 6

int main() {
	printf("%d\n", add(A, B));
	return false;
}