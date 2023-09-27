#include <iostream>
using namespace std;




class Account {
private:
	int id;
	string name;
	int balance;
	static int sum;

public:
	Account(int id = 0000, string name = "", int balance = 0) : id(id), name(name), 
		balance(balance) {}
	~Account() {
		sum = sum + balance;         // 모두 입력 받은 후 클래스 배열 delete 하면 모든 학생 잔액 합 출력
	}

	void setAccount(int id, string name, int balance) {
		this->id = id;
		this->name = name;
		this->balance = balance;
	}
	int getID() {
		return id;
	}
	static int getSUM() {
		return sum;
	}
};


int Account::sum = 0;

int main() {
	int number;
	cout << "총 학생 수 입력: ";
	cin >> number;
	Account* acnt = new Account[number];
	int id;
	string name;
	int balance;



	for (int i = 0; i < number; i++) {
		cout << i + 1 << "번째 학생 계좌 입력 : 학번 : ";
		cin >> id;
		for (int j = 0; j < i; j++)
			if (acnt[j].getID() == id)
				exit(100);

		cout << endl << "이름 : ";
		cin >> name;
		cout << endl << "잔액 : ";
		cin >> balance;
		acnt[i].setAccount(id, name, balance);
		cout << "====================" << endl << endl; 

	}

	delete[] acnt;
	cout << "회수된 금액 : " << Account::getSUM();



}