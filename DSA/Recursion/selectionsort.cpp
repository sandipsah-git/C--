#include <iostream>
using namespace std;

// Recursive function to perform selection sort
void recursiveSelectionSort(int arr[], int startIndex, int n) {
    // Base case: If startIndex reaches the last index, the array is sorted
    if (startIndex >= n - 1) {
        return;
    }
    
    // Find the index of the minimum element in the remaining unsorted portion
    int minIndex = startIndex;
    for (int j = startIndex + 1; j < n; j++) {
        if (arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }
    
    // Swap the minimum element with the current element (if needed)
    if (minIndex != startIndex) {
        swap(arr[minIndex], arr[startIndex]);
    }

    // Recur with the next index to sort the remaining part of the array
    recursiveSelectionSort(arr, startIndex + 1, n);
}

int main() {
    int arr[10] = {3, 7, 0, 5, 1, 9, 4, 8, 3, 0};
    int n = 10;

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Call the recursive selection sort function
    recursiveSelectionSort(arr, 0, n);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
