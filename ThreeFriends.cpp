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
	ll a, b, c;
	cin >> a >> b >> c;
	ll ap[3] = {a - 1, a, a + 1};
	ll bp[3] = {b - 1, b, b + 1};
	ll cp[3] = {c - 1, c, c + 1};
	ll minn = INT_MAX;
	for (ll i = 0; i < 3; ++i)
	{
		for (ll j = 0; j < 3; ++j)
		{
			for (ll k = 0; k < 3; ++k)
			{
				ll a1 = abs(ap[i] - bp[j]);
				ll a2 = abs(ap[i] - cp[k]);
				ll a3 = abs(cp[k] - bp[j]);
				minn = min(minn, a1 + a2 + a3);
			}
		}
	}
	cout << minn << endl;
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