#include <stdio.h>

union WeAre {
	int a;
	int b;
};

int main() {
	union WeAre we;
	we.a = 1;
	printf("a�� �� : %d\n", we.a);
	printf("b�� �� : %d\n", we.b);
	return false;
}