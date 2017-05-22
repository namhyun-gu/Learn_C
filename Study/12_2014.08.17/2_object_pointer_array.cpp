#include <iostream>
using namespace std;

class A {
public:
	int value;
	void show() {
		cout << value << endl;
	}
};

int main() {
	A *a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = new A();
	}
	for (int i = 0; i < 10; i++) {
		a[i]->value = i;
		a[i]->show();
	}
	for (int i = 0; i < 10; i++) {
		delete a[i];
	}
	return false;
}