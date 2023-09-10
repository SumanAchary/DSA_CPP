#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 10;
    int k = 0;
    int arr[n] = {1, 34, 1234, 6754, 23, 4, 12, 3, 5, 8};
    int found = linear_search(arr, n, k);
    if (found != -1)
    {
        cout << "The element " << k << " has been found at the index " << found << endl;
    }
    else
    {
        cout << "Damn! No such items found in the array" << endl;
    }

    return 0;
}