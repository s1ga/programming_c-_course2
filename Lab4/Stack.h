template<class T>
class Stack
{
private:
	int size;
	struct Node {
		T value;
		Node* next;
	};
	Node* head;
	void remove(Node* value);
public:
	Stack();
	~Stack();
	void push(T value);
	void pop();
	void print();
	bool isEmpty();
	int getSize();
};