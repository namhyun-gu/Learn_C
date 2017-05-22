#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fileStream;

	errno_t err = fopen_s(&fileStream, "output.dat", "wb");
	if (!err) {
		char data[10] = "ABC";
		fwrite(data, 1, 10, fileStream);
		fclose(fileStream);
	}

	err = fopen_s(&fileStream, "output.dat", "rb");
	if (!err) {
		char data[10];
		fread(data, 1, 10, fileStream);
		printf("%s\n", data);
		fclose(fileStream);
	}

	return false;
}