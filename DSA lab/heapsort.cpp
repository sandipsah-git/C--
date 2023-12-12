#include <iostream>
using namespace std;

void MAX_HEAPIFY(int a[], int, int);
void build_max_heap(int a[], int);
void heap_sort(int a[], int);
void printArray(int a[], int);
int main()
{
    int *arr, N;
    cout << "-------Heap Sort--------" << endl;
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
    heap_sort(arr, N);
    cout << endl
         << "Sorted array: " << endl;
    printArray(arr, N);
    delete[] arr;
    return 0;
}
void MAX_HEAPIFY(int a[], int i, int n)
{
    int left, right, largest;
    largest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;
    if (left < n && a[left] > a[largest])
    {
        largest = left;
    }
    if (right < n && a[right] > a[largest])
    {
        largest = right;
    }
    if (i != largest)
    {
        swap(a[i], a[largest]);
        MAX_HEAPIFY(a, largest, n);
    }
}
void build_max_heap(int a[], int n)
{
    for (int i = n / 2; i >= 0; i--)
        MAX_HEAPIFY(a, i, n);
}
void heap_sort(int a[], int n)
{
    build_max_heap(a, n);
    for (int i = n-1; i >= 0; i--)
    {
        swap(a[i], a[0]);
        MAX_HEAPIFY(a, 0, i);
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}