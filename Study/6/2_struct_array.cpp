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
	struct Food food[10];

	food[0].value = 1000;
	food[0].name = "���";
	food[0].salePercent = 0;

	food[1].value = 500;
	food[1].name = "��";
	food[1].salePercent = 0;

	printf("���� : %d\n", food[0].value);
	printf("���� �̸� : %s\n", food[0].name);
	printf("������ : %f\n", food[0].salePercent);

	printf("���� : %d\n", food[1].value);
	printf("���� �̸� : %s\n", food[1].name);
	printf("������ : %f\n", food[1].salePercent);

	Food2 food2[10];

	food2[0].value = 1000;
	food2[0].name = "���";
	food2[0].salePercent = 0;

	food2[1].value = 500;
	food2[1].name = "��";
	food2[1].salePercent = 0;

	printf("���� : %d\n", food2[0].value);
	printf("���� �̸� : %s\n", food2[0].name);
	printf("������ : %f\n", food2[0].salePercent);

	printf("���� : %d\n", food2[1].value);
	printf("���� �̸� : %s\n", food2[1].name);
	printf("������ : %f\n", food2[1].salePercent);

	return false;
}