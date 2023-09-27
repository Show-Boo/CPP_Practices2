#include <iostream>
using namespace std;

class Account {
private:
	string name;
	string id;
	int balance;

public:
	Account(string name, string id, int balance) : name(name), id(id), balance(balance) {}

	string getID() {
		return id;
	}
	int getBalance() {
		return balance;
	}

	Account operator+(Account& account) {
		Account final(this->name, this->id, this->balance + account.balance);
		return final;
	}
	Account operator-(Account& account) {
		Account final(this->name, this->id, this->balance - account.balance);
		return final;
	}
	friend ostream& operator<<(ostream& cout, const Account& acnt);


};

ostream& operator<<(ostream& cout, const Account& acnt) {
	cout << "�й�: " << acnt.id << ", �̸�: " << acnt.name << ", �ܾ�: " << acnt.balance;
	return cout;
}

int main() {
	Account acnt[3] = {
			Account("����ȣ", "2014", 10000),
			Account("������", "2019", 0),
			Account("������", "2013", 5000),
	};

	string send_ID;
	string get_ID;
	int sendNum = -1;
	int getNum = -1;
	while (true) {
		sendNum = -1;
		getNum = -1;

		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> send_ID;

		if (send_ID == "����") {
			cout << "�����մϴ�." << endl;
			for (int i = 0; i < 3; i++)
				cout << acnt[i] << endl;
			break;
		}

		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> get_ID;
		for (int i = 0; i < 3; i++)
			if (send_ID == acnt[i].getID())
				sendNum = i;
		for (int i = 0; i < 3; i++)
			if (get_ID == acnt[i].getID())
				getNum = i;

		if (get_ID == send_ID) {
			cout << "���� ���� �л��� �й��� ���� ���� �л��� �й��� �����մϴ�." << endl;
			continue;
		}

		else if (sendNum == -1 || getNum == -1) {
			cout << "������ �л� Ȥ�� ���� �л��� �й��� �������� �ʽ��ϴ�.�ٽ� �Է����ּ���." << endl;
			continue;
		}

		else if (acnt[sendNum].getBalance() == 0) {
			cout << "������ �л��� �ܾ��� �����մϴ�." << endl;
			continue;
		}

		else {
			acnt[getNum] = acnt[getNum] + acnt[sendNum];
			acnt[sendNum] = acnt[sendNum] - acnt[sendNum];
			cout << "���� �л��� �ܾ� => " << acnt[sendNum] << endl;
			cout << "���� �л��� �ܾ� => " << acnt[getNum] << endl;
			continue;
		}
	}
	return 0;


}