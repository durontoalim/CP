#include <iostream>

using namespace std;

const int N = 1e7+10;

long long int arr[N];

int main()
{
    int arr2[27278];
    arr2[100]++;
    int x = arr2[100] + arr2[200] + 100;
    cout<<x<<endl;

    int n,m;
    cin>>n>>m;

    while (m--)
    {
        int a,b,k;
        cin>>a>>b>>k;

        arr[a] += k;
        arr[b+1] -= k;

    }

    long long int sum = 0, max = -1;

    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
        if(max < sum){
            max = sum;
        }
    }

    cout<<max<<endl;
    
    

    return 0;
}