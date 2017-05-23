#include <iostream>
using namespace std;

void Add() {
	cout << "Add!" << endl;
}
void Add(int a, int b) {
	cout << a + b << endl;
}

int main() {
	Add();
	Add(3, 6);
	return false;
}