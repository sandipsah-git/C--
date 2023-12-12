// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}

// Driver program to test above functions
int main()
{
    int *arr, N;
    cout<<"-------Bubble sort--------"<<endl;
    cout << "Enter the size of the array:" << endl;
    cin >> N;
    arr = new int[N];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sort: " << endl;
    printArray(arr, N);
    bubbleSort(arr, N);
    cout << endl
         << "Sorted array: " << endl;
    printArray(arr, N);
    delete[] arr;
    return 0;
}