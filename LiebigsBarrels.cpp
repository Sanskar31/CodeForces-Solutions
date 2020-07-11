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
	ll n, k, l;
	cin >> n >> k >> l;
	ll count = n * k;
	ll len[count];
	for (ll i = 0; i < count; ++i)
		cin >> len[i];
	sort(len, len + count);
	ll rg = upper_bound(len, len + count, len[0] + l) - len;
	if (rg < n)
	{
		cout << 0 << endl;
		return;
	}

	ll ans = 0;
	ll u = 0;
	for (ll i = 0; i < n; ++i)
	{
		ans += len[u++];
		for (ll j = 0; j < k - 1; ++j)
		{
			if (rg - u > n - i - 1)
				u++;
			else
				break;
		}
	}
	cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast
	int t;
	t = 1;
	// cin >> t;
	test;
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}