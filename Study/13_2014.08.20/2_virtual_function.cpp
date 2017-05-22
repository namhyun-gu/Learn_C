#include <iostream>
using namespace std;

class Parent {
public:
	virtual void over() {
		cout << "Parent's over" << endl;
	}
};

class Child : public Parent {
public:
	virtual void over() {
		cout << "Child's over" << endl;
	}
};

int main() {
	Parent parent, *pointerParent;
	Child child;
	pointerParent = &parent;
	pointerParent->over();
	pointerParent = &child;
	pointerParent->over();
	return false;
}