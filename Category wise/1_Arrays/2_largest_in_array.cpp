#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int arr[] = {1,2,3,4,5,6,7,8,6,43,2,555,9};
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    for(int i = 0; i <arr_len-1;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}