#include <iostream>
using namespace std;

template <class T>
class Queue {
private:
	T* p_list; // 정수형 변수들을 가지는 배열
	int size; //현재 저장된 변수들의 개수
	int MAX_SIZE; // 최대로 저장할 수 있는 p_list의 크기
public:
	Queue(int _MAX_SIZE = 1000);
	~Queue();
	int find_index(T _item);
	void Enqueue(T _item);
	T Dequeue();
	void print() const;
	int get_size();
	T get_item(int _index);
};

template <class T>
Queue<T>::Queue(int _MAX_SIZE) : p_list(new T[_MAX_SIZE]), size(0), MAX_SIZE(_MAX_SIZE) {}

template <class T>
Queue<T>::~Queue() {
	delete[] p_list;
}

template <class T>
int Queue<T>::find_index(T _item) {
	for (int i = 0; i < size; i++)
		if (p_list[i] == _item)
			return i;
	return -1;
}

template <class T>
void Queue<T>::Enqueue(T _item) {
	if (this->find_index(_item) == -1)
		p_list[size++] = _item;
	else
		return;
	return;
}

template <class T>
T Queue<T>::Dequeue() {
	T list = p_list[0];
	if (size == 0) {
		cout << "Error: No item exist in the list" << endl;
		return list;
	}
	for (int i = 0; i < size - 1; i++)
		p_list[i] = p_list[i + 1];
	size--;
	return list;
}

template <class T>
void Queue<T>::print() const {
	cout << "Items in the list : ";
	for (int i = 0; i < size; i++)
		cout << p_list[i] << ", ";
	cout << endl;
}

template <class T>
int Queue<T>::get_size() {
	cout << size << endl;
}

template <class T>
T Queue<T>::get_item(int _index) {
	return p_list[_index];
}

int main()
{
	Queue<int> int_queue;
	Queue<float> float_queue;
	Queue<char> char_queue;

	int_queue.Enqueue(1);
	int_queue.Enqueue(2);
	int_queue.Enqueue(2);
	int_queue.Enqueue(5);

	float_queue.Enqueue(4.3);
	float_queue.Enqueue(2.5);
	float_queue.Enqueue(3.7);
	float_queue.Enqueue(3.7);

	char_queue.Enqueue('b');
	char_queue.Enqueue('b');
	char_queue.Enqueue('c');
	char_queue.Enqueue('a');

	cout << "<Before Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();

	int_queue.Dequeue();
	float_queue.Dequeue();
	float_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();

	cout << "<After Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();

	return 0;
}
