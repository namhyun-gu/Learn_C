#include <stdio.h>

enum Days {
	Sunday,
	Monday
};

int main() {
	Days day;
	day = Days(0);
	if (day == Sunday) {
		printf("�Ͽ���\n");
	}
	else {
		printf("������\n");
	}
	return false;
}