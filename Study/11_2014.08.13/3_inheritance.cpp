#include <iostream>
using namespace std;

class Paper {
private:
	int value;
public:
	Paper(int _value) {
		value = _value;
	}
	void showPaper() {
		cout << value << endl;
	}
};

class Box : public Paper {
private:
	int size;
public:
	Box(int _value, int _size) : Paper(_value) {
		size = _size;
	}
	void showBox() {
		showPaper();
		cout << size << endl;
	}
};

int main() {
	Box box(10, 20);
	box.showPaper();
	box.showBox();
	return false;
}