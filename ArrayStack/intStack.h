#pragma once
#ifndef INTSTACK_H


class IntStack {
private:
    int size;
    int* data;
    int top;

public:
    IntStack(int size);

    ~IntStack();

    void push(int e);

    int pop();

    bool isEmpty();

    bool isFull();

    void display();

};

#endif // !INTSTACK_H
