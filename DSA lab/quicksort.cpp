#include <iostream>
using namespace std;
int partition(int a[], int lb, int up)
{
    int start, end, pivot, i, j;
    pivot = a[lb];
    start = lb;
    end = up;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
            swap(a[start], a[end]);
    }
    swap(a[lb], a[end]);
    return end;
}
int quicksort(int a[], int lb, int up)
{
    int loc;
    if (lb < up)
    {
        loc = partition(a, lb, up);
        quicksort(a, lb, loc - 1);
        quicksort(a, loc + 1, up);
    }
}
void print_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int N, *arr;
    cout<<"------Quick Sort------"<<endl;
    cout << "Enter the size of the array" << endl;
    cin >> N;
    arr = new int[N];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting the array: " << endl;
    print_array(arr, N);
    quicksort(arr, 0, N);
    cout << endl
         << "After sorting the array: " << endl;
    print_array(arr, N);
    return 0;
}