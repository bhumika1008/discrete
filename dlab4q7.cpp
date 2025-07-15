#include <iostream>
using namespace std;


int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;             
        else if (arr[mid] < target)
            left = mid + 1;         
        else
            right = mid - 1;       
    }

    return -1; 
}

int main() {
    int n, target;

    cout << "Enter number of elements (sorted array): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter the number to search for: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Number found at index " << result << endl;
    else
        cout << "Number not found in the array." << endl;

    return 0;
}
