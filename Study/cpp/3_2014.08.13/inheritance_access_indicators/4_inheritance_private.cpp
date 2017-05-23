#include <iostream>
using namespace std;

class Paper {
private:
	int a = 1;
protected:
	int b = 2;
public:
	int c = 3;
};

class Box : private Paper {
};

int main() {
	Box box;
	// cout << box.a << endl; Error!
	// cout << box.b << endl; Error!
	// cout << box.c << endl; Error!
	return false;
}