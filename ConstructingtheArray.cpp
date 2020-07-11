/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F(i,a,b) for(ll i = (ll)(a); i <= (ll)(b); i++)
#define RF(i,a,b) for(ll i = (ll)(a); i >= (ll)(b); i--)
#define INF 100009
#define mod 1000000007
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second
#define test while(t--)solve();

void solve()
{
	int n;
	cin >> n;
	int v[n + 1];
	set<pair<int, int> >s;
	s.insert({n, -1});
	int op = 0;
	while (!s.empty())
	{
		++op;
		pair<int, int> z = *s.rbegin();
		s.erase(z);
		z.second *= -1;
		int cd = (z.second + z.first - 1);
		int mid = (z.second + cd) / 2;
		v[mid] = op;
		if (mid - z.second)
			s.insert({mid - z.second, -z.second});
		if (cd - mid)
			s.insert({cd - mid, -(mid + 1)});
	}
	for (int i = 1; i <= n; ++i)
		cout << v[i] << " ";
	cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	fast
	int t;
	// t = 1;
	cin >> t;
	test;
	return 0;
}