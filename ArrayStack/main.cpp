#include <iostream>
#include "IntStack.h"
#include "CharStack.h"
using namespace std;


void stack1() {
	IntStack stack = IntStack(20);
	for (int i = 0; i < 10; i++) {
		stack.push(i);
	}
	stack.display();
	for (int i = 0; i < 3; i++) {
		stack.pop();
	}
	stack.display();
	stack.~IntStack();
}

void stack2() {
	IntStack stack = IntStack(20);
	for (int i = 1; i < 10; i += 2) {
		stack.push(i);
	}
	stack.display();
	for (int i = 0; i < 3; i++) {
		stack.pop();
	}
	stack.display();
}

void stack3() {
	CharStack charStack = CharStack(20);
	for (int i = 0; i < 4; i++) {
		charStack.push((char)(65 + i));
	}
	charStack.display();
	charStack.pop();
	charStack.pop();
	charStack.display();
}

void stack4() {
	IntStack stack[] = { IntStack(20), IntStack(20) };

	for (int i = 1; i <= 8; i++) {
		if (i >= 1 && i <= 4) {
			stack[0].push(i);
		}
		else {
			stack[1].push(i);
		}
	}
	for (int i = 0; i < 2; i++) {
		cout << "stack[" << i << "]" << endl;
		stack[i].display();
	}
	for (int i = 0; i < 3; i++) {
		stack[0].pop();
	}
	cout << "stack[" << 0 << "]" << endl;
	stack[0].display();
	for (int i = 0; i < 2; i++) {
		stack[1].pop();
	}
	cout << "stack[" << 1 << "]" << endl;
	stack[1].display();
	for (int i = 0; i < 2; i++) {
		stack[i].~IntStack();
	}
}

int main() {
	stack1();
	//stack2();
	//stack3();
	//stack4();
}