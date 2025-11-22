// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

int stackArr[100];
int top = -1;

void push(int value) {
    if (top == 99) {
        cout << "Stack Overflow\n";
        return;
    }
    top++;
    stackArr[top] = value;
}

int pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return -1;
    }
    int val = stackArr[top];
    top--;
    return val;
}

int peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return -1;
    }
    return stackArr[top];
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--)
        cout << stackArr[i] << " ";
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
