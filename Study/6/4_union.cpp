#include <stdio.h>

union WeAre {
	int a;
	int b;
};

int main() {
	union WeAre we;
	we.a = 1;
	printf("a의 값 : %d\n", we.a);
	printf("b의 값 : %d\n", we.b);
	return false;
}