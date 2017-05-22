#include <iostream>
using namespace std;

template<typename T>
void show(T value) {
	cout << value << endl;
}

int main() {
	show('ABC'); // char
	show(2014); // int
	show(8.24); // double
	return false;
}