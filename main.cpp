#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
    Node(int x, Node *n) {data=x, next=n;}
};
class Stack{
private:
    Node *top;
    int size;
    int counter;
public: Stack(int z){
        top= NULL;
        size=z;
        counter=0;

    }
    void push(int x){
        if(counter == size){
            cout << "Stack is full" << endl;

        }
         else if(top!=NULL){   Node *ptr = new Node(x,NULL);
            ptr ->data = x;
            ptr -> next = top;
            top = ptr;
            counter++;}
         else{   Node *ptr = new Node(x,NULL);
            ptr ->data = x;
            ptr -> next = top;
            top = ptr;
            counter++;}


    };
    void pop(){
        if(top==NULL){    cout << "Stack is Empty" << endl;
        }
        else{Node *ptr= top;
        top = top -> next;
        delete(ptr);
        counter--;}

    };
    void topOf(){if(top == NULL){
            cout << "Stack is Empty" << endl;
    }
    else{    cout << "Top:" << top->data << endl;
        }
    };
    void isEmpty(){
        if(top== NULL){
            cout << "Stack is empty" << endl;

        }
        else
            cout << "Stack is not empty" << endl;

    };
    void sizeOf(){
        cout << "Size:" << counter <<endl;

    };
};




int main() {
Stack stack1 = *new Stack(5);
stack1.isEmpty();
stack1.push(2);
stack1.isEmpty();
stack1.topOf();
stack1.push(3);
stack1.sizeOf();
stack1.topOf();
stack1.pop();
stack1.sizeOf();
stack1.topOf();
    stack1.push(3);
    stack1.push(3);
    stack1.push(3);
    stack1.push(3);
    stack1.push(3);
    stack1.topOf();

    return 0;
}
