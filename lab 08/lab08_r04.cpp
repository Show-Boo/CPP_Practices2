#include <iostream>
#include <vector>
using namespace std;

int inputGrade(float grade) {
	cin >> grade;
	if ((grade - (int)grade) != 0.0 || grade < 0 || grade > 100) {
		cout << "invalid input!!!" << endl;
		exit(EXIT_FAILURE);
	}
	else
		return (int)grade;
}

int topGrade(const vector<int>& grade) {
	int high = grade[0];
	for (int i = 1; i < grade.size(); i++) {
		if (grade[i] > high) {
			high = grade[i];
		}
	}
	return high;
}

int main() {
	vector<int> grades;
	float _grade = 0;
	for (int i = 0; i < 3; i++) {
		cout << "Input " << i << "-th grade(0~100):";
		int grade = inputGrade(_grade);
		grades.push_back(grade);
	}
	int highest_num = topGrade(grades);
	cout << "Top Grade: " << highest_num;
	return 0;
}