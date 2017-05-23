#include <iostream>
using namespace std;

class B;

class A {
private:
	int adata;
public:
	A(int _adata) {
		adata = _adata;
	}
	void showData(B &b);

	friend class B;
};

class B {
private:
	int bdata;
public:
	B(int _bdata) {
		bdata = _bdata;
	}

	void showData(A &a) {
		cout << a.adata << endl;
	}

	friend class A;
};

void A::showData(B &b) {
	cout << b.bdata << endl;
}

int main() {
	A a(10);
	B b(20);

	a.showData(b);
	b.showData(a);
	return false;
}