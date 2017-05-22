#include <iostream>
using namespace std;
class Box {
private:
	int *value;
public:
	Box(int _value) {
		value = new int;
		value[0] = _value;
	}
	void show() {
		cout << value[0] << endl;
	}
	~Box() {
		delete[] value;
	}
};

int main() {
	Box box(10);
	box.show();
	return false;
}