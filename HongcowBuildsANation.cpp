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

ll n, m, k;
vector<ll> v[1005];
ll gov[1005], size[1005];
bool visited[1005];

ll dfs(ll s)
{
	visited[s] = true;
	ll c = 1;
	for (auto i : v[s])
		if (!visited[i])
			c += dfs(i);
	return c;
}

void solve()
{
	memset(visited, false, sizeof(visited));
	cin >> n >> m >> k;
	for (ll i = 0; i < k; ++i)
		cin >> gov[i];
	for (ll i = 0; i < m; ++i)
	{
		ll a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	ll maxx = 0;
	ll index;
	for (ll i = 0; i < k; ++i)
	{
		size[gov[i]] = dfs(gov[i]);
		if (maxx < size[gov[i]])
		{
			maxx = size[gov[i]];
			index = i;
		}
	}
	for (ll i = 1; i <= n; ++i)
	{
		if (!visited[i])
			maxx += dfs(i);
	}
	ll ans = 0;
	for (ll i = 0; i < k; ++i)
	{
		if (i == index)
			continue;
		ll s = size[gov[i]];
		ans += (s * (s - 1)) / 2;
	}
	ans += (maxx * (maxx - 1)) / 2;
	cout << ans - m << endl;
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