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
	ll n;
	cin >> n;
	map<pair<ll, ll>, ll> mp;
	bool flag = false;
	for (ll i = 0; i < n; ++i)
	{
		ll a, b;
		cin >> a >> b;
		if (mp[ {a, b}] != 0)
		{
			cout << mp[ {a, b}] << " " << i + 1 << endl;
			return;
		}
		mp[ {a, b}] = i + 1;
	}
	for (auto itr = mp.begin(); itr != mp.end(); ++itr)
	{
		pair<ll, ll> find = {itr->first.first, 0};
		auto p = mp.lower_bound(find);
		if (p == itr)
			p++;
		if (p != mp.end())
		{
			if (p->first.second <= itr->first.second)
			{
				flag = true;
				cout << p->second << " " << itr->second << endl;
				break;
			}
		}
	}
	if (!flag)
		cout << -1 << " " << -1 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast
	ll t;
	t = 1;
	// cin >> t;
	test;
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}