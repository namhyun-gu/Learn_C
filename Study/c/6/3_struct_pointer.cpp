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
	struct Food *foodP;
	foodP = &food;

	foodP->value = 8000;
	foodP->name = "치킨";
	foodP->salePercent = 20;

	(*foodP).value = 8000;
	(*foodP).name = "치킨";
	(*foodP).salePercent = 20;

	printf("가격 : %d\n", foodP->value);
	printf("음식 이름 : %s\n", foodP->name);
	printf("할인율 : %f\n", foodP->salePercent);

	Food2 food2;
	Food2 *food2P;
	food2P = &food2;

	food2P->value = 8000;
	food2P->name = "치킨";
	food2P->salePercent = 20;

	printf("가격 : %d\n", food2P->value);
	printf("음식 이름 : %s\n", food2P->name);
	printf("할인율 : %f\n", food2P->salePercent);

	return false;
}