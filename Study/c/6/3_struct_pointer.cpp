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
	foodP->name = "ġŲ";
	foodP->salePercent = 20;

	(*foodP).value = 8000;
	(*foodP).name = "ġŲ";
	(*foodP).salePercent = 20;

	printf("���� : %d\n", foodP->value);
	printf("���� �̸� : %s\n", foodP->name);
	printf("������ : %f\n", foodP->salePercent);

	Food2 food2;
	Food2 *food2P;
	food2P = &food2;

	food2P->value = 8000;
	food2P->name = "ġŲ";
	food2P->salePercent = 20;

	printf("���� : %d\n", food2P->value);
	printf("���� �̸� : %s\n", food2P->name);
	printf("������ : %f\n", food2P->salePercent);

	return false;
}