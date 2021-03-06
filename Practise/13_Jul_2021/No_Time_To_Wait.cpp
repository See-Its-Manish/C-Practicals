/*
Link   : https://www.codechef.com/MARCH21C/problems/NOTIME
Author : seeitsmanish
*/
#include<bits/stdc++.h>
using namespace std;

#define ff 				first
#define ss 				second
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define rev(v) 			reverse(v.begin(), v.end())
#define int 			long long int
#define li 				long int
#define vi 				vector<int>
#define pb 				push_back
#define endl 			"\n"
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



int32_t main() {
	FIO();

	// n ---> no of time zones
	// h ---> min time needed
	// x ---> Time Remaining
	int n, h, x;
	cin >> n >> h >> x;
	vi t(n);

	loop(i, 0, n)
	cin >> t[i];

	loop(i, 0, n)
	if (t[i] + x >= h)
	{
		cout << "YES";
		return 0;
	}

	cout << "NO";


	return 0;
}



