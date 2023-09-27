#include <string>
#include <iostream>
using namespace std;

class Account {
	//private: //�������
	string name;
	string id;
	double balance;
public: // ����Լ�(method)
	// 3���� ������ ����
	Account() : name(""), id(""), balance(0)
	{} // �⺻������. name : "", id : "", balance : 0 ���� �ʱ�ȭ

	Account(string name, string id) : name(name), id(id), balance(0)
	{} // name, id �޾ƿ���, balance�� 0���� �ʱ�ȭ

	Account(string name, string id, double balance) : name(name), id(id), balance(balance < 0 ? 0 : balance)
	{} // name, id , balance �޾ƿͼ� �ʱ�ȭ, balance < 0 �� ��� 0���� �ʱ�ȭ

	void deposit(double _amt) { balance += _amt; }
	bool withdraw(double _amt) {
		if (balance - _amt < 0)
			return false;
		balance -= _amt;
		return true;
	}
	void print() {
		cout << name << ", " << id << ", " << balance << endl;
	}
};

int main() {
	Account ac1("�輺ȣ", "1002", 5000);
	Account ac2;
	ac2.print();
	ac1.print();

	int depo;
	cout << "������ �ݾ��� �Է��ϼ��� : ";
	cin >> depo;
	ac1.deposit(depo);
	ac1.print(); // print() �Լ��� ac1 ���

	int wdrw;
	cout << "����� �ݾ��� �Է��ϼ��� : ";
	cin >> wdrw;
	if (!ac1.withdraw(wdrw))
		cout << "�ܾ��� �����մϴ�." << endl;
	ac1.print();
	return 0;
}