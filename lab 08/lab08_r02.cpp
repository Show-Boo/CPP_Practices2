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
	cout << "기본값 출력> " << str << endl;
	
	string word;
	change(&str, &word);
	cout << "변환된 값 출력> " << str << endl;
	
	return 0;

}