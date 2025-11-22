// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

int Swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << i + 1 << ": ";

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j],arr[j+1]);
            }
        }

        // Print array after this immediate pass
        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << endl;
    }
}

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n);

    cout << "\nFinal Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
