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
		sum = sum + balance;         // ��� �Է� ���� �� Ŭ���� �迭 delete �ϸ� ��� �л� �ܾ� �� ���
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
	cout << "�� �л� �� �Է�: ";
	cin >> number;
	Account* acnt = new Account[number];
	int id;
	string name;
	int balance;



	for (int i = 0; i < number; i++) {
		cout << i + 1 << "��° �л� ���� �Է� : �й� : ";
		cin >> id;
		for (int j = 0; j < i; j++)
			if (acnt[j].getID() == id)
				exit(100);

		cout << endl << "�̸� : ";
		cin >> name;
		cout << endl << "�ܾ� : ";
		cin >> balance;
		acnt[i].setAccount(id, name, balance);
		cout << "====================" << endl << endl; 

	}

	delete[] acnt;
	cout << "ȸ���� �ݾ� : " << Account::getSUM();



}