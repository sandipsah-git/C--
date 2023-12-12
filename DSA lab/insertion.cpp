#include <iostream>
using namespace std;
void insertion_sort(int arr[], int size)
{
    int temp, j;
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
int main()
{
    int *arr, N;
    cout<<"-------Insertion Sort--------"<<endl;
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
    insertion_sort(arr, N);
    cout << endl
         << "Sorted array: " << endl;
    printArray(arr, N);
    delete[] arr;
    return 0;
}