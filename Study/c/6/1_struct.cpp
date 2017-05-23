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
	food.name = "치킨";
	food.salePercent = 20;

	printf("가격 : %d\n", food.value);
	printf("음식 이름 : %s\n", food.name);
	printf("할인율 : %f\n", food.salePercent);

	Food2 food2;
	food2.value = 8000;
	food2.name = "치킨";
	food2.salePercent = 20;

	printf("가격 : %d\n", food2.value);
	printf("음식 이름 : %s\n", food2.name);
	printf("할인율 : %f\n", food2.salePercent);

	return false;
}