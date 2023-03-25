#include <iostream>


inline void error(const char* message) {
    std::cout << message << std::endl;
    exit(1);
}

template <class T>
class TemplateStack {
private:
    int size;
    T* data;
    int top;

public:
    TemplateStack(int size) {
        this->size = size;
        data = new T[size];
        top = -1;
    }
    ~TemplateStack() {}

    void push(T e) {
        if (isFull()) error("Stack overflow");
        data[++top] = e;
    }

    T pop() {
        if (isEmpty()) error("stack underflow");
        return data[top--];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void display() {
        std::cout << "Number of Data: " << top << std::endl;
        for (int i = 0; i < top; i++) {
            std::cout << "<" << data[i] << ">" << std::endl;
        }
    }
};
