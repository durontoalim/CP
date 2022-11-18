#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//  bool cmp(const pair<ll,ll>&p1, const pair<ll,ll>&p2){


//     if(p1.first>p2.first)  return 1;
//     else if(p1.first==p2.first) return (p1.second<p2.second);

//   return 0;

// }
vector<ll>vec(1e4+9);
ll a,b,c,d,e,f,num;
ll  fn(int n){
    if ( vec[n] != -1 ) return vec[n];
	if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    return vec[n]=(fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007;
}
int main()
{
	optimize();
	ll i,j,k,t;

	scanf("%lld",&t);
	for(j=1;j<=t;j++) {
			/* code */
		//cout<<"KI"<<endl;
		//memset(fib_arr,-1,sizeof(fib_arr));
		fill ( vec.begin(), vec.end(), -1 );
		scanf("%lld%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f,&num);
		//cin>>a>>b>>c>>d>>e>>f>>n;
		//printf("Case %d: %d",i,fn(n)%10000007);
		//cout<<"Case "<<i<<": "<<fn(n)% 10000007;

		ll a1=fn(num);
		printf("Case %lld: %lld\n",j,a1%10000007);
	}
}
