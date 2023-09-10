#include <bits/stdc++.h>
using namespace std;

void swap(char arr[], int left, int right) {
    char temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
}

int main() {
    char arr[10];
    cin >> arr;
    
    int left = 0;
    int right = strlen(arr) - 1;

    while (left < right) {
        swap(arr, left, right);
        left++;
        right--;
    }

    cout << "Reversed string: " << arr << endl;
    return 0;
}
