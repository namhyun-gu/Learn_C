#include <iostream>
using namespace std;

int main() {
	int *pointer = new int;
	*pointer = 10;
	cout << *pointer << endl;

	int *pointerArray = new int[10];

	for (int i = 0; i < 10; i++) {
		pointerArray[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << pointerArray[i] << endl;
	}

	delete[]pointer;
	delete[]pointerArray;

	return false;
}