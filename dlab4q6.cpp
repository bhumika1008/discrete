#include <iostream>
using namespace std;


int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target)
            return i; 
    }
    return -1; 
}

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter the number to search for: ";
    cin >> target;

    int result = linearSearch(arr, n, target);

    if (result != -1)
        cout << "Number found at index " << result << endl;
    else
        cout << "Number not found in the array." << endl;

    return 0;
}
