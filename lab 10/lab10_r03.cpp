#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int id;
	string major;
	vector<string> subject;
	vector<char> grade;

public:
	Student() : name("default"), id(0), major("depart")
	{}
	Student(string _name, int _id, string _major) : name(_name), id(_id), major(_major)
	{}

	void setName(string _name) {
		name = _name;
	}
	void setID(int _id) {
		id = _id;
	}
	void setDpt(string _major) {
		major = _major;
	}
	void print() {
		cout << name << " " << id << " " << major << endl;
	}

	void addGrade(string _subject, char _grade) {
		subject.push_back(_subject);
		grade.push_back(_grade);
	}
	void printGrades() {
		int i = 0;
		for (string elem : subject)
		{
			cout << subject[i] << ' ' << grade[i] << endl;
			i++;
		}
		getGPA();
	}

	void getGPA() {
		float GPA = 0;
		int i = 0;
		for (char elem : grade)
		{
			if (grade[i] == 'A')
				GPA += 4;
			else if (grade[i] == 'B')
				GPA += 3;
			else if (grade[i] == 'C')
				GPA += 2;
			else if (grade[i] == 'D')
				GPA += 1;
			else
				GPA += 0;
			i++;
		}
		cout << "GPA : " << GPA / i;
	}

	void getYear(int year) {
		if ((year - (id / 1000000)) == 0)
			cout << "Freshmen(1학년)" << endl;
		if ((year - (id / 1000000)) == 1)
			cout << "Sophomore(2학년)" << endl;
		if ((year - (id / 1000000)) == 2)
			cout << "Junior(3학년)" << endl;
		if ((year - (id / 1000000)) == 3)
			cout << "Senior(4학년)" << endl;
		if ((year - (id / 1000000)) >= 4)
			cout << "About to graduate(5학년)" << endl;
	}
};

int main() {
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << "\n\n";

	Student Ron;
	Ron.print();
	cout << "\n";
	Ron.setName("Ron");
	Ron.setID(2014103959);
	Ron.setDpt("EE");
	Ron.print();
	Ron.getYear(2019);
	Ron.addGrade("Computer Architecture", 'B');
	Ron.addGrade("Maching Learning", 'B');
	Ron.addGrade("Computer Vision", 'C');
	Ron.printGrades();
	cout << "\n\n";

	return 0;
}
