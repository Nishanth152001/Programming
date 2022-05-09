#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int mid;
    int s = 0;
    int e = n;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int length = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    cout << binary_search(arr, length, key) << endl;
}