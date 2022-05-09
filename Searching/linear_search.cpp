#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 6, 2, 5, 9, 1};

    int length = sizeof(arr) / sizeof(arr[0]);
    cout << length;
    int key;
    cin >> key;
    cout << linear_search(arr, length, key) << endl;
}