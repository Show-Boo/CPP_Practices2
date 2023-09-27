#include <iostream>
#include <functional> // function object
using namespace std;
//[closure]: �ܺ� ������ lambda�Լ� ���η� ����
//[a]: ���� a�� call by value�� lambda�Լ��� ����
//[&a]: ���� a�� call by reference�� ����
//[=]: ��� �ܺ� ������ call by value�� ����
//[&]: ��� �ܺ� ������ call by ref.�� ����
// - ���� ������ ��: closure�� ����� ��� function��ü�� assign ���� ��
int evaluate2(function<int(int, int)> f, int x, int y) {
	return f(x, y);
}
int main() {
	int a = 10, b = 20;
	//[a]: ���� a�� call by value�� lambda�Լ��� ����
	cout << evaluate2([a](int x, int y) {return a + x + y; }/* a + x + y ���� �Լ� ���� */, 2, 3) << endl;
	//[&]: ��� �ܺ� ������ call by ref.�� ����
	a = 20;
	[&](int x) {cout << a * x << endl; } (10);
	/* a = 20; a * x ���� �Լ� ���� */
	cout << "a: " << a << endl;
	return 0;
}