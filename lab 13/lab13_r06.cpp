#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> list{ 10, 20, 30, 40, 50 };
	int num; // 출력할 list의 수
	string error = "Index is out of range. Please try again.";

	while (1) {
		cout << "출력 할 숫자의 수 : ";
		cin >> num;
		try {
			if (num < 0) {
				cout << endl;
				break;
			}
			for (int i = 0; i < num; i++) {
				if (i > 4) {
					throw error;
				}
				cout << list[i] << ' ';
			}
			cout << endl;
		}
		catch (string error) {
			cout << endl << error << endl;
		}
	}

	cout << "Program exit..." << endl;
	return 0;
}
