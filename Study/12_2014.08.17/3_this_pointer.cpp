#include <iostream>
using namespace std;

class A {
	int value;
public:
	A(int value) {
		this->value = value;
	}
	void show() {
		cout << value << endl;
	}
};

int main() {
	A a(10);
	a.show();
	return false;
}