///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;

#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int main()
{
	deque<int> q;
	q.push_back ( 1 );
	q.push_back ( 3 );
	q.push_front ( 2 );

	cout << q.front() << endl; /// 2
	cout << q.back() << endl; /// 3

	q.pop_back();
	cout << q.back() << endl; ///1

	q.pop_front();
	cout << q.front() << endl; /// 1

	cout << q.size() << endl; /// 1


	return 0;
}

















