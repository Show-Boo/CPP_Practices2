#include <vector>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <random>
using namespace std;


void print_matrix(vector<vector <int> >& m) {
	for (auto& row : m) {
		for (auto& col : row)
			col = (rand() % 19) - 9;
	}  
}

void print(const vector<vector <int>>& m) {
	for (auto& row : m) {
		for (auto& col : row)
			cout << setw(4) << col;
		cout << endl;
	}
}

vector <vector <int>> xMat(vector <vector <int>>& m1, vector <vector <int>>& m2) {
	int row1 = m1.size(), col1 = m1[0].size();
	in
	
	
	vector <vector <int>> m(m1.size(), vector <int>(m2[0].size()));
	for (int i = 0; i < m1.size(); i++) {
		for (int j = 0; j < m2[0].size(); j++) {
			m[i][j] = 0;
			for (int k = 0; k < m1[0].size(); k++) {
				elem = elem + m1[i][k] * m2[k][j];
			}
			m[i][j] = elem;
		}
	}
	return m;
}

int main() {
	int rowA, colA, rowB, colB;
	srand(time(NULL));
	
	cout << "A�� ��, ���� ũ�⸦ �Է����ּ��� : ";
	cin >> rowA >> colA;
	vector <vector<int>> A (rowA, vector <int>(colA));

	cout << "B�� ��, ���� ũ�⸦ �Է����ּ��� : ";
	cin >> rowB >> colB;
	vector <vector<int>> B (rowB, vector <int>(colB));

	if (rowA < 1 || colA < 1 || rowB < 1 || colB < 1)
		cout << "����� ������ �� �����ϴ�" << endl;
	else
	{	
		print_matrix(A);
		cout << "A ��� : " << endl;
		print(A);
		cout << endl;


		print_matrix(B);
		cout << "B ��� : " << endl;
		print(B);
		cout << endl;


		if (colA != rowB)
			cout << "�� ����� ���� �� �����ϴ�." << endl;
		else 
		{
			vector<vector<int>> mat;
			mat = xMat(A, B);
			cout << "AB �����: " << endl;
			print(mat);
		}


	}
	return 0;


}