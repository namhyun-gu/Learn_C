#include <iostream>
using namespace std;

class NumberBox {
	int num1, num2;
public:
	NumberBox(int num1, int num2) {
		this->num1 = num1, this->num2 = num2;
	}
	void showNumber() {
		cout << "num1: " << num1 << ", num2: " << num2 << endl;
	}
	NumberBox operator+(NumberBox &another) {
		return NumberBox(num1 + another.num1, num2 + another.num2);
	}
};

int main() {
	NumberBox numBox1(0, 8);
	NumberBox numBox2(2, 4);

	NumberBox resultBox = numBox1 + numBox2;
	//NumberBox resultBox = numBox1.operator+(numBox2);

	resultBox.showNumber();
	return false;
}