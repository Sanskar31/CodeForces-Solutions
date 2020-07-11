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
	int n, k;
	cin >> n >> k;
	int a[n];
	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		s.insert(a[i]);
	}
	if (s.size() > k)
	{
		cout << -1 << endl;
		return;
	}
	vector<int> v;
	int m = s.size();
	int t = k - m;
	for (int i = 0; i < t; ++i)
		v.push_back(1);
	for (auto i : s)
		v.push_back(i);
	cout << n*k << endl;
	for (int i = 0; i < n; ++i)
	{
		for (auto j : v)
			cout << j << " ";
	}
	cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast
	int t;
	cin >> t;
	// t=1;
	test
	return 0;
}