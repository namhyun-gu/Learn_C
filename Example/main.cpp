#include <stdio.h>

#define ACTION_ADD 0
#define ACTION_READ 1
#define ACTION_END 2
#define ACTION_SAVE 3

#define STRUCT_ARRAY_SIZE 10

typedef struct _VAR_BOX {
	int id;
	char name[50];
	int value;
} VAR_BOX;

VAR_BOX Box[STRUCT_ARRAY_SIZE];

int LIST_ID = 0;
enum ERROR_CODE { Success, Error };

ERROR_CODE Add() {
	printf("\n");
	printf(" �̸� : ");
	scanf_s("%s", &Box[LIST_ID].name, sizeof(Box[LIST_ID].name));
	printf(" �� : ");
	scanf_s("%d", &Box[LIST_ID].value);
	if (Box[LIST_ID].name == NULL || Box[LIST_ID].value == NULL) {
		Box[LIST_ID].id = NULL;
		return Error;
	}
	else {
		Box[LIST_ID].id = LIST_ID;
		LIST_ID++;
		return Success;
	}
}

void Read() {
	printf("\n");
	if (LIST_ID != 0) {
		for (int i = 0; i < LIST_ID; i++) {
			printf(" %d %s %d\n", Box[i].id, Box[i].name, Box[i].value);
		}
	}
	else {
		printf(" �ҷ��� ����Ʈ ���� �����ϴ�\n");
	}
	printf("\n");
}

void Save() {
	if (LIST_ID != 0) {
		FILE *fileStream;
		errno_t err = fopen_s(&fileStream, "output.txt", "wt");
		if (!err) {
			for (int i = 0; i < LIST_ID; i++) {
				fprintf_s(fileStream, "%d %s %d\n", Box[i].id, Box[i].name, Box[i].value);
			}
			fclose(fileStream);
			printf("\n output.txt �� ����Ǿ����ϴ�\n\n");
		}
	}
	else {
		printf("\n ������ ����Ʈ ���� �����ϴ�\n\n");
	}
}

int main() {
	while (true) {
		int action = NULL;
		printf("�� �ൿ ��ȣ�� �Է��ϼ���\n(0 - �߰�, 1 - ����Ʈ �б�, 2 - ����, 3 - ����Ʈ ����) \n>>> ");
		scanf_s("%d", &action);
		if (action == ACTION_ADD) {
			ERROR_CODE err = Add();
			if (err) {
				printf("\n ���� �Է����� �ʾҽ��ϴ�\n\n");
			}
			else {
				printf("\n ����Ʈ�� �߰��Ǿ����ϴ�\n\n");
			}
		}
		else if (action == ACTION_READ) {
			Read();
		}
		else if (action == ACTION_END) {
			break;
		}
		else if (action == ACTION_SAVE) {
			Save();
		}
		else {
			printf("\n��ġ�ϴ� ���� �����ϴ�\n�ùٸ� ���� �Է��ϼ���\n\n");
		}
	}
	return false;
}