#include <iostream>
#include <string>
#include <vector>
using namespace std;

void change(vector <int>& v) {                    // 벡터 값 변경해야 할 때는 & 추가, 아니면 안해도 됨
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

	cout << "기본 Vector 값 : " << endl;
	for (int j = 0; j < 10; j++)
		cout << v[j] << " ";

	change(v);
	cout << endl;
	cout << "함수 실행 후 Vector 값 : " << endl;
	for (int j = 0; j < 10; j++)
		cout << v[j] << " ";
	return 0;
}