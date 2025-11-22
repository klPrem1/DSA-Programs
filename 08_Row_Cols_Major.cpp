// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

int main() {
    int base, i, j, rows, cols;

    cin >> base;
    cin >> rows;
    cin >> cols;
    cin >> i;
    cin >> j;

    int size = sizeof(int);

    int rowMajor = base + (i * cols + j) * size;
    int colMajor = base + (j * rows + i) * size;

    cout << rowMajor << endl;
    cout << colMajor << endl;

    return 0;
}
