#include <iostream>
#include <string>


using namespace std;

void change(string *a, string *b) {
	

	cout << "input> ";
	cin >> *b;
	*a = *b;

}

int main() {
	string str = "This is default value";
	cout << "�⺻�� ���> " << str << endl;
	
	string word;
	change(&str, &word);
	cout << "��ȯ�� �� ���> " << str << endl;
	
	return 0;

}