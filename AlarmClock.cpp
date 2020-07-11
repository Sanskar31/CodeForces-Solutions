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
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll req = a - b;
	if (req <= 0)
	{
		cout << b << endl;
		return;
	}
	if (d >= c)
	{
		cout << -1 << endl;
		return;
	}
	ll time = (req / (c - d));
	if (time * (c - d) != req)
		time++;
	time *= c;
	cout << b + time << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	fast
	ll t;
	// t = 1;
	cin >> t;
	test;
	return 0;
}