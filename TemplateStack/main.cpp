#include "TStack.h"

int main(){
    TStack<char> charStack = TStack<char>(20);
    for(int i = 0; i < 4; i++){
        charStack.push((char)(65+i));
    }   
    charStack.display();
    charStack.display();
    charStack.pop();
    charStack.pop();
    charStack.display();
}