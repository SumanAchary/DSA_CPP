#include <bits/stdc++.h>
using namespace std;

void print_pairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            cout << arr[i] << "-" << arr[j] << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_pairs(arr, n);
    return 0;
}
