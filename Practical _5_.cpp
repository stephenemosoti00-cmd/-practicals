#include <iostream>
using namespace std;

// Function to input array elements
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to display array elements
void displayArray(int arr[], int n) {
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to calculate sum of array elements
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find the largest element
int largestElement(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n;
    int arr[50];

    cout << "Enter number of elements: ";
    cin >> n;

    inputArray(arr, n);
    displayArray(arr, n);

    cout << "Sum of elements: " << sumArray(arr, n) << endl;
    cout << "Largest element: " << largestElement(arr, n) << endl;

    return 0;
}
