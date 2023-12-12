#include <iostream>
using namespace std;

void shell_sort(int a[], int size)
{
    int i, j, gap;
    for (gap = size / 2; gap >= 1;gap= gap / 2)
    {
        for (j = gap; j < size; j++)
        {
            for (i = j - gap; i >= 0; i = i - gap)
            {
                if (a[i + gap] > a[i])
                    break;
                else
                    swap(a[i], a[i + gap]);
            }
        }
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
    cout << "------Shell Sort------" << endl;
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
    shell_sort(arr, N);
    cout << endl
         << "After sorting the array: " << endl;
    print_array(arr, N);
    return 0;
}