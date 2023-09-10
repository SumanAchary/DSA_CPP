#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    int n = vec.size();
    int largest = vec[0];
    for (int i = 1; i < n; i++)
    {
        largest = max(largest, vec[i]);
    }
    cout << largest<<endl;
    return 0;
}