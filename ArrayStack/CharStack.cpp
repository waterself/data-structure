#include <iostream>
#include "CharStack.h"

inline void error(const char* message) {
    std::cout << message << std::endl;
    exit(1);
}

CharStack::CharStack(int size) {
    this->size = size;
    data = new char[size];
    top = -1;
}

CharStack::~CharStack(){
    delete []this->data;
    data = NULL;
}

void CharStack::push(char e) {
    if (isFull()) error("stack overflow");
    data[++top] = e;
}

char CharStack::pop() {
    if (isEmpty()) error("stack underflow");
    return data[top--];
}

bool CharStack::isEmpty() {
    return top <= -1;
}

bool CharStack::isFull() {
    return top >= size - 1;
}

void CharStack::display() {
    std::cout << "Data Count: " << top+1 << std::endl;
    for (int i = top; i >= 0; i--) {
        std::cout << i << "<" << data[i] << ">" << std::endl;
    }
}