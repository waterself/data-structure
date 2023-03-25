#pragma once
#ifndef TSTACK_H

template <typename T>
class TStack {
private:
    int size;
    T* data;
    int top;

public:
    TStack(int size){ 
        data = new T[size];
        top = -1;}
    ~TStack(){}

    void push(T e);

    T pop();

    bool isEmpty();

    bool isFull();

    void display();
    
};

#endif // !TSTACK_H