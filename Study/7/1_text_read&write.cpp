#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fileStream;

	errno_t err = fopen_s(&fileStream, "output.txt", "wt");
	if (!err) {
		fprintf_s(fileStream, "%s", "ABC");
		fclose(fileStream);
	}

	err = fopen_s(&fileStream, "output.txt", "rt");
	if (!err) {
		char text[100];
		fscanf_s(fileStream, "%s", text, _countof(text));
		printf("%s\n", text);
		fclose(fileStream);
	}

	return false;
}