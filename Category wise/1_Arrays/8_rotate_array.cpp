#include <bits/stdc++.h>
using namespace std;

// vector<int> kRotate(vector<int> a, int k)
// {
//     int n = a.size();
//     k = k % n;

//     vector<int> rotated;

//     for (int i = n - k; i <= n - 1; i++)
//     {
//         rotated.push_back(a[i]);
//     }

//     for (int i = 0; i < n - k; i++)
//     {
//         rotated.push_back(a[i]);
//     }

//     return rotated;
// }

// vector<int> kRotate_optimised(vector<int> arr, int k)
// {
//     int n = arr.size();
//     int rot_idx = n - k;

//     int start = rot_idx;
//     int end = n - 1;

//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start += 1;
//         end -= 1;
//     }

//     start = 0;
//     end = rot_idx - 1;

//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start += 1;
//         end -= 1;
//     }

//     start = 0;
//     end = n - 1;

//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start += 1;
//         end -= 1;
//     }

//     return arr;
// }

// int main()
// {
//     vector<int> input = {1, 2, 3, 4, 5};
//     int k = 2;

//     vector<int> rotated = kRotate(input, k);
//     vector<int> rotated_opt = kRotate_optimised(input, k);

//     cout << "Original vector: ";
//     for (int num : input)
//     {
//         cout << num << " ";
//     }

//     cout << "\nRotated vector: ";
//     for (int num : rotated)
//     {
//         cout << num << " ";
//     }

//     cout << "\nRotated vector Optimized: ";
//     for (int num : rotated_opt)
//     {
//         cout << num << " ";
//     }

//     return 0;
// }
int main() {
 
int a[]={1,2,3,4,5};
int b[]={1,2,3,4,5};
 
if(a==b) {
    printf("yes");
else {
    printf("No");
}
return 0;}