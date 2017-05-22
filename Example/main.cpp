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
	printf(" 이름 : ");
	scanf_s("%s", &Box[LIST_ID].name, sizeof(Box[LIST_ID].name));
	printf(" 값 : ");
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
		printf(" 불러올 리스트 값이 없습니다\n");
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
			printf("\n output.txt 로 저장되었습니다\n\n");
		}
	}
	else {
		printf("\n 저장할 리스트 값이 없습니다\n\n");
	}
}

int main() {
	while (true) {
		int action = NULL;
		printf("할 행동 번호를 입력하세요\n(0 - 추가, 1 - 리스트 읽기, 2 - 종료, 3 - 리스트 저장) \n>>> ");
		scanf_s("%d", &action);
		if (action == ACTION_ADD) {
			ERROR_CODE err = Add();
			if (err) {
				printf("\n 값을 입력하지 않았습니다\n\n");
			}
			else {
				printf("\n 리스트에 추가되었습니다\n\n");
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
			printf("\n일치하는 값이 없습니다\n올바른 값을 입력하세요\n\n");
		}
	}
	return false;
}