#include <bits/stdc++.h>

using namespace std;

void optimaize() {

    int N;
    cin>>N;

    while (N--)
    {
        int n,x;
        cin>>n>>x;

        int arr[n+10] = {0};
        int arr2[n+10] = {0};
        int arr3[n+10] = {0};

        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
        int t = n;
        int g = 0;

        for (int i = 1; i <= n; i++)
        {
            g = __gcd(g, arr[i]);
            arr2[i] =g;
        }
        g = 0;
        for (int i = t; i >= 1; i--)
        {
            g = __gcd(g, arr[i]);
            
            arr3[i] = g;
        }

        while (x--)
        {
            int l,r;
            cin>>l>>r;
            int gc = __gcd(arr2[l-1], arr3[r+1]);
            cout<< gc<<endl;
        }
        
    }
    
}


int normal_case()
{
    int N;
    cin>>N;

    while (N--)
    {
        int n,x;
        cin>>n>>x;

        int arr[n];

        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
        
        while (x--)
        {
            int l,r;
            cin>>l>>r;
            int gc = 0;
            for (int i = 1; i < l; i++)
            {
                gc = __gcd(gc,arr[i]);
            }

            for (int i = r+1; i <= n; i++)
            {
                gc = __gcd(gc,arr[i]);
            }

            cout<<gc<<endl; 
        }
    }

    // O(N) * O(n) + O(N*X*n) =  10^5 * 10^5 + 10^5 * 10^5 * 10^5 = 10^15
    

    return 0;
}


int main() {

   optimaize();


    return 0;
}