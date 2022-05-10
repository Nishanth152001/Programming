#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 6, 2, 7, 4, 9, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    int count = 1;
    int temp;
    while (count < len)
    {
        for (int i = 0; i < len - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}