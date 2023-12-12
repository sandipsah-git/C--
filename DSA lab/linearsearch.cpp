#include <iostream>
using namespace std;

int linear_search(int a[], int k, int l, int r)
{
    if (l <= r)
    {
        if (k == a[l])
            return l;
        else
            return linear_search(a, k, l + 1, r);
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
    index = linear_search(p, key, 0, N);
    if (index == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element " << key << " is found at position: " << index + 1 << endl;
    return 0;
}