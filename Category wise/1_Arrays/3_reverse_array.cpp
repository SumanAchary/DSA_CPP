#include <bits/stdc++.h>
using namespace std;

void reverse_array(char arr[], int k)
{
    int left = 0;
    int right = k - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }
}

int main()
{
    char arr[] = {'S', 'U', 'M', 'A', 'N'};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBEFORE REVERSED" << endl;
    for (int i = 0; i < len; i++)
        cout << arr[i];

    reverse_array(arr, len);

    cout << "\nAFTER REVERSED" << endl;
    for (int i = 0; i < len; i++)
        cout << arr[i];

    return 0;
}



