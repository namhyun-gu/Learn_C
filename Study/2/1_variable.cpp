#include <stdio.h>

void static_add() {
	static int static_a;
	static_a += 1;
	printf("%d\n", static_a);
}

int extern_a;
extern void extern_add();

int main() {
	int local_a = 1;
	{
		int local_a = 2;
		printf("%d\n", local_a);
	}
	printf("%d\n", local_a);

	static_add();
	static_add();
	static_add();

	extern_add();
	extern_add();
	extern_add();

	return false;
}