#include <iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int d) : data(d), next(NULL) {}
};

class Queue {
private:
    Node* front;
    Node* rear;
    
public:
    Queue() : front(NULL), rear(NULL) {}
    
    ~Queue() {
        while (front != NULL) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
    
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return;
        }
        
        Node* temp = front;
        front = front->next;
        delete temp;
        
        if (front == NULL) {
            rear = NULL;
        }
    }
    
    int peek() {
        if (isEmpty()) {
            std::cerr << "Queue is empty.\n";
            return -1;
        }
        return front->data;
    }
    
    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    std::cout << "Front element: " << q.peek() << "\n";
    
    q.dequeue();
    std::cout << "Front element after dequeue: " << q.peek() << "\n";
    
    q.dequeue();
    std::cout << "Front element after dequeue: " << q.peek() << "\n";
    
    q.dequeue();
    std::cout << "Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << "\n";
    
    return 0;
}

