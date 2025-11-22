// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x) {
    Node* t = new Node;
    t->data = x;
    t->next = NULL;

    if (rear == NULL) {
        front = rear = t;
    } else {
        rear->next = t;
        rear = t;
    }
}

int dequeue() {
    if (front == NULL)
        return -1;
    int x = front->data;
    Node* t = front;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    delete t;
    return x;
}

void display() {
    Node* p = front;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    cout << dequeue() << endl;
    cout << dequeue() << endl;

    display();

    return 0;
}
