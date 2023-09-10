#include<bits/stdc++.h>
using namespace std;

void print_prefix(char str[]){
    for(int e = 0; str[e]!='\0';e++){
        for(int s = 0; s <= e; s++){
            cout << str[s];
        }
        cout <<endl;
    }
}


int main()
{
    char str[] = "suman_achary";
    print_prefix(str);
 return 0;
}