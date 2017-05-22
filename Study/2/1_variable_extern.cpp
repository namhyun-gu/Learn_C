#include <stdio.h>

extern int extern_a;

void extern_add() {
	extern_a += 1;
	printf("%d\n", extern_a);
}