// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int x) {
    Node* t = new Node;
    t->data = x;
    t->next = NULL;

    if (head == NULL) {
        head = t;
        return;
    }
    Node* p = head;
    while (p->next != NULL)
        p = p->next;
    p->next = t;
}

void deletePos(int pos) {
    if (head == NULL) return;

    if (pos == 1) {
        Node* t = head;
        head = head->next;
        delete t;
        return;
    }

    Node* p = head;
    for (int i = 1; i < pos - 1 && p != NULL; i++)
        p = p->next;

    if (p == NULL || p->next == NULL) return;

    Node* t = p->next;
    p->next = t->next;
    delete t;
}

void deleteValue(int x) {
    if (head == NULL) return;

    if (head->data == x) {
        Node* t = head;
        head = head->next;
        delete t;
        return;
    }

    Node* p = head;
    while (p->next != NULL && p->next->data != x)
        p = p->next;

    if (p->next == NULL) return;

    Node* t = p->next;
    p->next = t->next;
    delete t;
}

void display() {
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    insertEnd(15);
    insertEnd(26);
    insertEnd(39);
    insertEnd(42);

    deletePos(3);
    deleteValue(42);

    display();
    return 0;
}
