#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 3, 2, 8, 9};
    int temp;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int k = 0; k < len; k++)
    {
        cout << arr[k] << endl;
    }
}