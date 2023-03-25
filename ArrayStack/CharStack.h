#pragma once
#ifndef CHARSTACK_H

class CharStack {
private:
	int size;
	int top;
	char* data;

public:
	CharStack(int size);
    
	~CharStack();

	void push(char e);

	char pop();
	
	bool isEmpty();
	
	bool isFull();
	
	void display();

};

#endif // !CHARSTACK_H

