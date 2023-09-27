#include<iostream>
#include<iomanip>
using namespace std;

void square(int *a) {
	*a = *a * *a;
}

int main(void) {

	int num;

	cout << "input> ";
	cin >> num;


	square(&num);
	cout << "Á¦°ö°ª> " << num;

}
