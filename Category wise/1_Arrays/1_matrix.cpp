#include<bits/stdc++.h>
using namespace std;

void print_matric(int arr[][3],int m,int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
                cout << arr[i][j] << " ";
        }
        cout << endl;}

}


int main()
{

    int arr[][3] = {{1,23,4},{3,3,411}};
    print_matric(arr, 4, 4);
 return 0;
}