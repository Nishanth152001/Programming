#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 50, 20, 90, 70};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < len; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}