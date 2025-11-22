// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

int q[100];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == 99) return;          
    if (front == -1) front = 0;      
    rear++;
    q[rear] = x;
}

int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    int x = q[front];
    front++;
    return x;
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
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
