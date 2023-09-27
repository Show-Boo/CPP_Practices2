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
	cout << "학번: " << acnt.id << ", 이름: " << acnt.name << ", 잔액: " << acnt.balance;
	return cout;
}

int main() {
	Account acnt[3] = {
			Account("장윤호", "2014", 10000),
			Account("김유민", "2019", 0),
			Account("박진배", "2013", 5000),
	};

	string send_ID;
	string get_ID;
	int sendNum = -1;
	int getNum = -1;
	while (true) {
		sendNum = -1;
		getNum = -1;

		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
		cin >> send_ID;

		if (send_ID == "종료") {
			cout << "종료합니다." << endl;
			for (int i = 0; i < 3; i++)
				cout << acnt[i] << endl;
			break;
		}

		cout << "돈을 받을 학생의 학번을 입력하세요: ";
		cin >> get_ID;
		for (int i = 0; i < 3; i++)
			if (send_ID == acnt[i].getID())
				sendNum = i;
		for (int i = 0; i < 3; i++)
			if (get_ID == acnt[i].getID())
				getNum = i;

		if (get_ID == send_ID) {
			cout << "돈을 보낼 학생의 학번과 돈을 받을 학생의 학번이 동일합니다." << endl;
			continue;
		}

		else if (sendNum == -1 || getNum == -1) {
			cout << "보내는 학생 혹은 받은 학생의 학번이 존재하지 않습니다.다시 입력해주세요." << endl;
			continue;
		}

		else if (acnt[sendNum].getBalance() == 0) {
			cout << "보내는 학생의 잔액이 부족합니다." << endl;
			continue;
		}

		else {
			acnt[getNum] = acnt[getNum] + acnt[sendNum];
			acnt[sendNum] = acnt[sendNum] - acnt[sendNum];
			cout << "보낸 학생의 잔액 => " << acnt[sendNum] << endl;
			cout << "받은 학생의 잔액 => " << acnt[getNum] << endl;
			continue;
		}
	}
	return 0;


}