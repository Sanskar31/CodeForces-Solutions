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

ll n, x, y;
vector<ll> v[300005];

ll dfs(ll curr, ll par, ll y)
{
	ll ans = 1;
	for (auto i : v[curr])
	{
		if (i != y && i != par)
			ans += dfs(i, curr, y);
	}
	return ans;
}

void solve()
{
	cin >> n >> x >> y;
	for (ll i = 0; i < n - 1; ++i)
	{
		ll a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	ll x_size = n - dfs(x, -1, y);
	ll y_size = n - dfs(y, -1, x);
	ll ans = n * (n - 1);
	ans -= x_size * y_size;
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