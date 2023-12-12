#include <iostream>
using namespace std;

void merge(int a[], int lb, int m, int ub)
{
    int i, j, k;
    int *b;
    b = new int[10];
    i = lb, j = m + 1, k = lb;
    while (i <= m && j <= ub)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > m)
    {
        while (j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
        while (i <= m)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    for (i = lb; i <= ub; i++)
    {
        a[i] = b[i];
    }
}
void merge_sort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        merge_sort(a, lb, mid);
        merge_sort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
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
    cout << "------Merge Sort------" << endl;
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
    merge_sort(arr, 0, N);
    cout << endl
         << "After sorting the array: " << endl;
    print_array(arr, N);
    return 0;
}