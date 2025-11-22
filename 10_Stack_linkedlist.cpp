// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* topNode = NULL;

void push(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = topNode;
    topNode = temp;
}

int pop() {
    if (topNode == NULL) {
        cout << "Stack Underflow\n";
        return -1;
    }
    int x = topNode->data;
    Node* temp = topNode;
    topNode = topNode->next;
    delete temp;
    return x;
}

int peek() {
    if (topNode == NULL) {
        cout << "Stack is empty\n";
        return -1;
    }
    return topNode->data;
}

void display() {
    if (topNode == NULL) {
        cout << "Stack is empty\n";
        return;
    }
    Node* p = topNode;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    int n, value;

    cout << "How many values to push? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> value;
        push(value);
    }

    display();

    cout << "\nHow many values to pop? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val = pop();
        if (val != -1)
            cout << "Popped: " << val << endl;
    }

    display();
    return 0;
}
