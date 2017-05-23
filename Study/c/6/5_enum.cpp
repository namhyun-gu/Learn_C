#include <stdio.h>

enum Days {
	Sunday,
	Monday
};

int main() {
	Days day;
	day = Days(0);
	if (day == Sunday) {
		printf("일요일\n");
	}
	else {
		printf("월요일\n");
	}
	return false;
}