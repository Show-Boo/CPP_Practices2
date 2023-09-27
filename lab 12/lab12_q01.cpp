#include <iostream>
#include <string>
using namespace std;
class Base {
protected: //Base type
	void print_base() { cout << "Base" << endl; }
};
// Base type | ��� type | Derived type
// private | ������� | ���� �Ұ�( Base�Լ��� ����)
// protected | ������� | private
// public | private/protected | private
// public | public | public
class Derived : private Base {
public:
	void print_derived() {
		Base::print_base();
		cout << "Derived" << endl;
	}
};
int main() {
	Base base;
	Derived derived;
	derived.print_derived();
	return 0;
}