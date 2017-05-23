#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	try {
		if (b == 0) throw b;
		cout << a / b << endl;
	}
	catch (int b) {
		cout << "Exception, Can't number " << b << endl;
	}
	return false;
}