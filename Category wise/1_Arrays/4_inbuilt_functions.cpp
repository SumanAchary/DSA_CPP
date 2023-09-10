#include<bits/stdc++.h>
using namespace std;
int main()
{
    // STRING COMPARE
    char str1[10], str2[10];
    cin.getline(str1,10);
    cin.getline(str2,10);

    if (strcmp(str1,str2) == 0){
        cout << "EQUAL";

    }else{
        cout << "NOT EQUAL";
    }

 return 0;
}