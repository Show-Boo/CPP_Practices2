#include <iostream>
#include <string>
#include <vector>
using namespace std;

void change(vector <int>& v) {                    // ���� �� �����ؾ� �� ���� & �߰�, �ƴϸ� ���ص� ��
	for (int i = 0; i < v.size() / 2; i++) {
		int a = v[i];
		v[i] = v[9 - i];
		v[9 - i] = a;
	}
}

int main() {
	vector <int> v(10);
	for (int i = 0; i <= v.size(); i++)
		v[i] = i;

	cout << "�⺻ Vector �� : " << endl;
	for (int j = 0; j < 10; j++)
		cout << v[j] << " ";

	change(v);
	cout << endl;
	cout << "�Լ� ���� �� Vector �� : " << endl;
	for (int j = 0; j < 10; j++)
		cout << v[j] << " ";
	return 0;
}