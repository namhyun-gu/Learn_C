#include <iostream>
using namespace std;

class Parent {
public:
	void over() {
		cout << "Parent's over" << endl;
	}
};

class Child : public Parent {
public:
	void over() {
		cout << "Child's over" << endl;
	}
};

int main() {
	Child child;
	child.over();
	return false;
}