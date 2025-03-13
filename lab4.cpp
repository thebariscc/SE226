#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* head;     // Points to top element of stack.
    int num;        // Number of elements (index-style tracking).
    int capacity;   // Fixed size limit (resized when full).

public:
    Stack(int initialCapacity) {  // You can set any initial size.
        head = nullptr;
        num = -1;
        capacity = initialCapacity;
    }

    void push(int x) {
        if (num + 1 >= capacity) {
            increaseCapacity();
        }
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = head;
        head = newNode;
        num++;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }
        Node* temp = head;
        int poppedValue = head->data;
        head = head->next;
        delete temp;
        num--;
        return poppedValue;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }
        return head->data;
    }

    bool isEmpty() {
        return num < 0;
    }

    void increaseCapacity() {
        capacity *= 2; 
    }

    bool deleteElement(int val) {
        if (isEmpty()) {
            return false;
        }
        
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr) {
            if (current->data == val) {
                if (prev == nullptr) {
                    head = head->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                num--;
                return true;
            }
            prev = current;
            current = current->next;
        }
        return false;
    }


};

int main() {

    
    return 0;
}
