// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int pos, val;
    cout << "\nEnter position to insert (1 to " << n+1 << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = val;
    n++;

    cout << "\nArray after insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";


    cout << "\n\nEnter position to delete (1 to " << n << "): ";
    cin >> pos;

    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    cout << "\nArray after deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
