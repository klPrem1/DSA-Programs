// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n, int target){
    int low = 0, high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int arr[100], n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements (sorted): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> target;
    
    int result = BinarySearch(arr, n, target);

    if (result != -1)
        cout << "Element found at position " << result + 1 << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
