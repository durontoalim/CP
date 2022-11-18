#include <bits/stdc++.h>

using namespace std;


int main()
{
    int N;
    cin>>N;

    int arr[N][N];
    int pfs[N][N];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin>>arr[i][j];
            pfs[i][j] = arr[i][j] + pfs[i-1][j] + pfs[i][j-1]-pfs[i-1][j-1];
        }
    }


    int Q;
    cin>>Q;

    while (Q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        cout<<pfs[c][d] + pfs[a-1][b-1] - pfs[a-1][d] - pfs[c][b-1]<<endl;       
    }


    return 0;
}