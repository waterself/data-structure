#include <iostream>
#include "IntStack.h"


inline void error(const char* message) {
    std::cout << message << std::endl;
    exit(1);
}

IntStack::IntStack(int size) {
    this->size = size;
    data = new int[size];
    top = -1;
}

IntStack::~IntStack() {
    delete[] this->data;
    data = NULL;
}

void IntStack::push(int e) {
    if (IntStack::isFull()) error("Stack overflow");
    data[++top] = e;
}

int IntStack::pop() {
    if (IntStack::isEmpty()) error("stack underflow");
    return data[top--];
}

bool IntStack::isEmpty() {
    return top <= -1;
}

bool IntStack::isFull() {
    return top >= size - 1;
}

void IntStack::display() {
    std::cout << "Number of Data: " << top+1 << std::endl;
    for (int i = top; i >= 0; i--) {
        std::cout << i << "<" << data[i] << ">" << std::endl;
    }
}