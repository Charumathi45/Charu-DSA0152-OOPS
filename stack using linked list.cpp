#include <iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int d) : data(d), next(NULL) {}
};

class Stack {
private:
    Node* top;
    
public:
    Stack() : top(NULL) {}
    
    ~Stack() {
        while (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
    
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty.\n";
            return;
        }
        
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    
    int peek() {
        if (isEmpty()) {
            std::cerr << "Stack is empty.\n";
            return -1;
        }
        return top->data;
    }
    
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    std::cout << "Top element: " << s.peek() << "\n";
    
    s.pop();
    std::cout << "Top element after pop: " << s.peek() << "\n";
    
    s.pop();
    std::cout << "Top element after pop: " << s.peek() << "\n";
    
    s.pop();
    std::cout << "Is the stack empty? " << (s.isEmpty() ? "Yes" : "No") << "\n";
    
    return 0;
}

