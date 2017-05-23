#include <iostream>
using namespace std;

class Mother {
public:
	void showMother() {
		cout << "Mother" << endl;
	}
};

class Father {
public:
	void showFather() {
		cout << "Father" << endl;
	}
};

class Child : public Mother, public Father {
public:
	void showParent() {
		showMother();
		showFather();
	}
};

int main() {
	Child child;
	child.showParent();

	child.showMother();
	child.showFather();
	return false;
}