#include <iostream>
using namespace std;

namespace Box {
	int A;
	void B() {
		cout << "B!" << endl;
	}
}

using namespace Box;

int main() {
	A = 10;
	B();
	cout << A << endl;
	return false;
}