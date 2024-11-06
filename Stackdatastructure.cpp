#include <iostream>
#include <cstdlib>

#define MAX_SIZE 30 

using namespace std;

class stack {
private:
	int* arr;
	int topİndex;

public:
	stack() { // constructor
		arr = new int[MAX_SIZE];
		topİndex = -1; //initialization / NULL value
	}
	~stack() { //destructor
		delete[] arr;
	}

	void push(int value) { 
		if (isfull()) {
			cout << "Stack is full! It's impossible to push a value on." << endl;
			return;
		}
		arr[++topİndex] = value;
		cout << "Added value to stack is : " << value << endl;
	}

	int pop() {
		if (isempty()) {
			cout << "\nStack isn't full! it's impossible to pop a value on." << endl;
			return -1;
		}

		return arr[topİndex--];
	}

	int peek() { //top value
		if (isempty()) {
			cout << "\nStack is empty! It's impossible to peek(show) a value on." << endl;
			return -1;
		}
		return arr[topİndex];
	}

	bool isempty() {
		return topİndex == -1;
	}
	
	bool isfull() {
		return topİndex == MAX_SIZE - 1;
	}

	int size() {
		return topİndex + 1;
	}

	void clear() {
		topİndex = -1;
		cout << "\nStack emptied." << endl;
	}
};



int main() {
	stack stack1;


	stack1.push(10);
	stack1.push(47);
	stack1.push(45);
	stack1.push(55);
	stack1.push(60);
	stack1.push(73);
	stack1.push(123);
	stack1.push(11);
	stack1.push(5);
	stack1.push(2);
	stack1.push(344);
	stack1.push(888);
	stack1.push(999);

	cout << "\nTop element is =  " << stack1.peek() << endl;
	cout << "\nSize of stack =  " << stack1.size() << endl;

	for (int i = 0; i < 5; i++) {
		int value = stack1.pop();
		cout << "Removed value from stack is : " << value << endl;
	}
	cout << "\nTop element is = " << stack1.peek() << endl; //11
	cout << "\nSize of stack = " << stack1.size() << endl;

	stack1.clear();
	cout << "\nTop element is = " << stack1.peek() << endl;
	cout << "\nSize of stack = " << stack1.size() << endl;

	stack1.pop();

	return 0;
}
