#include <iostream>
#include <ctime>
#include <random>
#include <vector>
using namespace std;



int main() {
	vector<int> list;
	srand(time(NULL));
	int n = (rand() % 100 + 1);
	list.resize(n);
	for (int i = 0; i < n; i++) {
		list[i] = i;
	}
	// vector�� 1~100 ������ random�� ũ��� ����� ä��� �ڵ� ����

	int cnt = -1;
	while (1) {
		cnt++;
		try { list.at(cnt); }
		catch (exception& e) { 
			cout << "���� list�� " << cnt << "�� ũ�⸦ ������ �ִ�" << endl;
			break;
		}
	}
	return 0;
}