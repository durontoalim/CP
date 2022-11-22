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
 
    for (int i = 1; i < N; i++)
    {
        if(s+v[i] >= v[i]){
            s += v[i];
        }
        else{
            s = v[i];
        }

        p = max(p,s);
    }
    
    cout<<p<<endl;
 
 
     return 0;
}