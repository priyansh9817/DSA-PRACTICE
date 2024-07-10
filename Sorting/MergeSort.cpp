#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int an = mid - l + 1;
    int bn = r - mid;
    // create 2 temp arrays
    int a[an];
    int b[bn];

    for (int i = 0; i < an; i++)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < bn; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < an && j < bn)
    {
        if (a[i] <= b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }
    while (i < an)
    {
        arr[k++] = a[i++];
    }
    while (j < bn)
    {
        arr[k++] = b[j++];
    }
}

void mergesort(int arr[], int l, int r)
{
    // base case
    if (l >= r)
    {
        return;
    }
    // recursive function
    int mid = (l + r) / 2;
    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of array[" << i << "]: ";
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
