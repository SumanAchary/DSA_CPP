#include <bits/stdc++.h>
using namespace std;

void binary_search(int arr[], int n, int k)
{
    int left = 0;
    int right = n;
    bool found = false;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (k == arr[mid])
        {
            cout << "The item " << k << " is at the index " << mid;
            found = true;
            break;
        }
        else if (k < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (!found)
    {
        cout << "NOT FOUND\n";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5, 78, 999, 4321, 432467, 43249};
    int n = end(arr) - begin(arr);
    // it would take 0(log n) time complexity.
    binary_search(arr, n, 999);
    return 0;
}