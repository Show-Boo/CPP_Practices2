#include <iostream>
using namespace std;

class CStudent {
private:
	int id;
	string name;
	string major;

public:
	CStudent() : id(2018000000), name("홍길동"), major("컴퓨터공학과")
	{}
	CStudent(int _id, string _name, string _major) : id(_id), name(_name), major(_major)
	{}

	void Display() {
		cout << "학번 :" << id << endl;
		cout << "이름 :" << name << endl;
		cout << "전공 :" << major << endl << endl;
	}
	void setNumber(int _id) {
		id = _id;
	}
	void setName(string _name) {
		name = _name;
	}
	void setMajor(string _major) {
		major = _major;
	}
	int getNumber() {
		return id;
	}
	string getName() {
		return name;
	}
	string getMajor() {
		return major;
	}
};

int main() {
	CStudent s1; // A
	s1.Display();

	CStudent s2(1999000000, "공지철", "연극영화과"); // B
	s2.Display();

	// C
	s1.setNumber(2006000000);
	s1.setName("민경훈");
	s1.setMajor("포스트모던");
	cout << "학번 :" << s1.getNumber() << endl;
	cout << "이름 :" << s1.getName() << endl;
	cout << "전공 :" << s1.getMajor() << endl;
	return 0;
}
