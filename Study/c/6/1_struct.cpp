#include <stdio.h>

struct Food {
	int value;
	char *name;
	float salePercent;
};

typedef struct _Food2 {
	int value;
	char *name;
	float salePercent;
}Food2;

int main() {
	struct Food food;
	food.value = 8000;
	food.name = "ġŲ";
	food.salePercent = 20;

	printf("���� : %d\n", food.value);
	printf("���� �̸� : %s\n", food.name);
	printf("������ : %f\n", food.salePercent);

	Food2 food2;
	food2.value = 8000;
	food2.name = "ġŲ";
	food2.salePercent = 20;

	printf("���� : %d\n", food2.value);
	printf("���� �̸� : %s\n", food2.name);
	printf("������ : %f\n", food2.salePercent);

	return false;
}