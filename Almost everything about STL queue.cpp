///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;

#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int main()
{

	queue <int> q;
	q.push( 1 );
	q.push( 2 );
	q.push( 3 );
	q.push( 7 );


	cout << q.size() << endl; /// 4
	cout << q.front() << endl; /// 1
	
	while ( !q.empty() ) {
		cout << q.front () << " "; /// 1 2 3 7
		q.pop();
	}


	return 0;
}

















