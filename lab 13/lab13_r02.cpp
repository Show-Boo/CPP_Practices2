#include <iostream>
#include <vector>
#include <ctime>
#include <iostream>
#include <ctime>
#include <random>
using namespace std;


int main() {
	srand(time(NULL));
	vector<int> v1(10);
	vector<int> v2(10);

	for (int& elem : v1)
		elem = rand() % 11;
	for (int& elem : v2)
		elem = rand() % 21;

	int min = 200;
	int max = 0;

	for (auto iter1 = v1.begin(); iter1 != v1.end(); iter1++)
		for (auto iter2 = v2.begin(); iter2 != v2.end(); iter2++) {
			if (max < (*iter1) * (*iter2))
				max = (*iter1) * (*iter2);
			if (min > (*iter1) * (*iter2))
				min = (*iter1) * (*iter2);
		}

	cout << "<vector 1>" << endl;
	for (auto iter = v1.begin(); iter < v1.end(); iter++)
		cout << " " << *iter;
	cout << endl;


	cout << "<vector 2>" << endl;
	for (auto iter = v2.begin(); iter < v2.end(); iter++)
		cout << " " << *iter;
	cout << endl << endl;

	cout << "ÃÖ´ñ°ª = " << max << endl;
	cout << "ÃÖ¼Ú°ª = " << min << endl;

	return 0;
}
