// Author - Prem Prakash Kumar- 242886
#include <iostream>
#include <stack>
using namespace std;

stack<int> s1, s2;

void enqueue(int x) {
    s1.push(x);
}

int dequeue() {
    if (s1.empty() && s2.empty())
        return -1;

    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

    int x = s2.top();
    s2.pop();
    return x;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << dequeue() << endl;
    cout << dequeue() << endl;

    enqueue(40);
    cout << dequeue() << endl;
    cout << dequeue() << endl;

    return 0;
}
