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
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for (ll i = 0; i < n; ++i)
		cin >> a[i];
	ll x = 0;
	ll m[n];
	map<ll, ll> mp;
	for (ll i = 0; i < n; ++i)
	{
		m[i] = (k - a[i] % k) % k;
		mp[m[i]]++;
	}
	ll maxx = 0;
	for (auto i : mp)
	{
		ll temp = 0;
		if (i.first == 0)
			continue;
		temp = i.first + 1;
		ll f = i.second;
		f--;
		temp += f * k;
		maxx = max(maxx, temp);
	}
	cout << maxx << endl;
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
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}