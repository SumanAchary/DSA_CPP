#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int arr[] = {1,2,3,4,5,6,7,8,9,10};
        int len = sizeof(arr)/sizeof(arr[0]);

        for(int i = len-1; i >=0;i--){
            cout <<arr[i]<<endl;
        }

        return 0;
    }
