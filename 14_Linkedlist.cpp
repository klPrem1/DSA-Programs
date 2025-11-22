// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertBeg(int x) {
    Node* t = new Node;
    t->data = x;
    t->next = head;
    head = t;
}

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

void insertPos(int x, int pos) {
    if (pos == 1) {
        insertBeg(x);
        return;
    }
    Node* t = new Node;
    t->data = x;

    Node* p = head;
    for (int i = 1; i < pos - 1 && p != NULL; i++)
        p = p->next;

    if (p == NULL) return;

    t->next = p->next;
    p->next = t;
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
    insertBeg(120);
    insertEnd(230);
    insertEnd(310);
    insertPos(248, 2);

    display();
    return 0;
}
