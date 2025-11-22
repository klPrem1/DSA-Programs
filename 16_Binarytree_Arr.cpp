// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

int arr[100];
int n;

void preorder(int i) {
    if (i >= n) return;
    cout << arr[i] << " ";
    preorder(2*i + 1);
    preorder(2*i + 2);
}

void inorder(int i) {
    if (i >= n) return;
    inorder(2*i + 1);
    cout << arr[i] << " ";
    inorder(2*i + 2);
}

void postorder(int i) {
    if (i >= n) return;
    postorder(2*i + 1);
    postorder(2*i + 2);
    cout << arr[i] << " ";
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    preorder(0);
    cout << endl;

    inorder(0);
    cout << endl;

    postorder(0);
    cout << endl;

    return 0;
}
