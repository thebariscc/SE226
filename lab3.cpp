#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data)
    {
        this->data = new_data;
        this->next = nullptr;
    }
};


class Queue {

    Node *front, *rear;

public:

    Queue() { front = rear = nullptr; }

    bool isEmpty()
    {

        if (front == nullptr) {
            return true;
        }
        return false;
    }

    void enqueue(int new_data) {

        Node* new_node = new Node(new_data);

        if (this->isEmpty()) {
            front = rear = new_node;
            return;
        }


        rear->next = new_node;
        rear = new_node;
    }


    void dequeue() {


        if (this->isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }


        Node* temp = front;
        front = front->next;

        if (front == nullptr)
            rear = nullptr;


        delete temp;
    }


    int bottom() {
      

        if (this->isEmpty()) {
            cout << "Queue is empty\n";
            return INT_MIN;
        }
        return front->data;
    }


    int top() {
        if (this->isEmpty()) {
            cout << "Queue is empty\n";
            return INT_MIN;
        }
      
        return rear->data;
    }
};


int main() {

    return 0;
}
