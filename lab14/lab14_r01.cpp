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
	// vector를 1~100 사이의 random한 크기로 만들고 채우는 코드 구현

	int cnt = -1;
	while (1) {
		cnt++;
		try { list.at(cnt); }
		catch (exception& e) { 
			cout << "현재 list는 " << cnt << "의 크기를 가지고 있다" << endl;
			break;
		}
	}
	return 0;
}