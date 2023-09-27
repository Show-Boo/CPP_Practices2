#include <iostream>
#include <random>

using namespace std;


int duplicate(int *arr, int size) {

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (arr[i] == arr[j] && arr[i] != arr[j])
				return true;
}




int main() {
	srand(time(NULL));
	int n;
	
	
	while (true) {
		cout << "Please enter a number : ";
		cin >> n;
		int size = n / 2;
		cout << "Size of random array : " << size << endl << "[ Array ]" << endl;

		if (n < 2)
		{
			cout << "Wrong number!!!";
			break;
		}

		int* arr = new int[size];
		for (int i = 0; i < size; i = i++) 
		{
			arr[i] = rand() % n;
			cout << arr[i] << ' ';
		}

		cout << endl;

		if (duplicate(arr, size) == true)
			cout << "Duplicates found." << endl;
		else
			cout << "Duplicates not found." << endl;
	
	}

}