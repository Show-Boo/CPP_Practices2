#include <iostream>
#include <string>

using namespace std;

template <class Iter>
string Reverse(Iter iter_begin, Iter iter_end) {
	string result;
	iter_end--;
	for (Iter iter = iter_end; iter != iter_begin; iter--)
		result += *iter;
	result += *iter_begin;
	return result;
}

template<class T>
bool evaluate(bool(*func)(T, T), T x, T y) {
	return func(x, y);
}

int main() {
	string text;
	string result;

	while (true) {
		cout << endl;
		cout << "문자열 하나를 입력해주세요 : ";
		cin >> text;

		if (text == "Q" || text == "q")
			break;

		result = Reverse(begin(text), end(text));
		cout << "입력하신 문자열의 역순 : " << result << endl;

		if (evaluate<string>([](string x, string y) { return x == y; }, text, result)) {
			cout << "이 문자는 회문입니다.";
			cout << endl;
		}
		else {
			cout << "이 문자는 회문이 아닙니다.";
			cout << endl;
		}

	}
}
