#include <bits/stdc++.h>
 
 
#define int long long
 
using namespace std;
 
int32_t main() {
 
    int N;
    cin>>N;
 
    
    vector<int>v;
 
    for (int i = 0; i < N; i++)
    {
        int x;
        cin>>x;
 
        v.push_back(x);
    }
 
    int p = v[0], s  = v[0];
 
    int n = v.size();
    
    for (int i = 1; i < n; i++)
    {
        s = max(v[i] , s+v[i]);
        p = max(p,s);
    }
 
    cout<<p<<endl;
 
 
 
 
     return 0;
}