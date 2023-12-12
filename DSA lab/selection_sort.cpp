#include <iostream>
using namespace std;
void print_array(int arr[], int);
void selection_sort(int arr[], int size);
int main()
{
    int N, *arr;
    cout<<"-------Selection sort---------"<<endl;
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
    selection_sort(arr, N);
    cout << "After sorting the array: " << endl;
    print_array(arr, N);
    return 0;
}
void selection_sort(int arr[], int size)
{
    int i, j, pos, min;
    for (i = 0; i < size; i++)
    {
        min = arr[i];
        pos = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                pos = j;
            }
        }
        if (pos != i)
        {
            swap(arr[i], arr[pos]);
        }
    }
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}