#include <bits/stdc++.h>

using namespace std;


const int N = 10^5;
int arr[N];

int pfs[N];


int main()
{
    int N;
    cin>>N;

    for (int i = 1; i <= N; i++)
    {
        cin>>arr[i];
        pfs[i] = pfs[i-1] + arr[i];
    }


    int Q;
    cin>>Q;

    while (Q--)
    {
        int l,r;
        cin>>l>>r;

        cout<<pfs[r]-pfs[l-1]<<endl;        
    }


    return 0;
}