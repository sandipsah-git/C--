#include <iostream>
using namespace std;
int bin_search(int a[], int x, int l, int r)
{
    int mid;
    mid = l + (r - l) / 2;
    if (l <= r)
    {
        if (x == a[mid])
            return mid;
        else if (x < a[mid])
            bin_search(a, x, l, mid - 1);
        else
            bin_search(a, x, mid + 1, r);
    }
    return -1;
}
int main()
{
    int *p, key, index, N;
    cout << "Enter the size of the array" << endl;
    cin >> N;
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }
    cout << "Enter the element that you want to search" << endl;
    cin >> key;
    index = bin_search(p, key, 0, N);
    if (index == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element " << key << " is found at position: " << index + 1 << endl;
    return 0;
}