#include <iostream>
using namespace std;
struct Box {
private:
	int value;
	char *name;
public:
	void setValue(int _value, char *_name) {
		name = _name;
		value = _value;

	}

	void show() {
		cout << value << endl;
		cout << name << endl;
	}
};

int main() {
	Box box;
	box.setValue(10, "A");
	box.show();
	return false;
}