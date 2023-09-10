#include <bits/stdc++.h>
using namespace std;

int print_sub_sum1(int arr[], int n)
{
    int largest_sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {

            int sub_array_sum = 0;

            for (int k = i; k <= j; k++)
            {
                sub_array_sum += arr[k];
            }

            largest_sum = max(largest_sum, sub_array_sum);
        }

    return largest_sum;
}

int print_sub_sum2(int arr[], int n)
{
    int largest_sum = INT_MIN; // Initialize with the minimum possible value
    int prefix_sum[100] = {0};
    prefix_sum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sub_array_sum = i > 0 ? prefix_sum[j] - prefix_sum[i - 1] : prefix_sum[j];
            largest_sum = max(largest_sum, sub_array_sum);
        }
    }

    return largest_sum;
}

int print_sub_sum3(int arr[], int n)
{
    int largest_sum = INT_MIN;
    int cs = 0;
    for (int i = 0; i < n; i++)
    {
        cs += arr[i];
        largest_sum = max(cs, largest_sum);
        if (cs < 0)
        {
            cs = 0;
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << print_sub_sum1(arr, n);
    cout << endl;
    cout << print_sub_sum2(arr, n);
    cout << endl;
    cout << print_sub_sum3(arr, n);
    return 0;
}