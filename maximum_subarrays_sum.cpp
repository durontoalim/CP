#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[] = {-1,2,4,-3,5,2,-5,2};
    int p = 0, s  = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++)
    {
        s = max(arr[i] , s+arr[i]);
        p = max(p,s);
    }

    cout<<p<<endl;

     return 0;
}