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

vector<ll> ans;
set<ll> v[200005];
bool visited[200005];

void solve()
{
	ll n, m;
	cin >> n >> m;
	for (ll i = 0; i <= n; ++i)
		visited[i] = false;
	for (ll i = 0; i < m; ++i)
	{
		ll a, b;
		cin >> a >> b;
		v[a].insert(b);
		v[b].insert(a);
	}
	set<int> can;
	visited[1] = true;
	ans.push_back(1);
	while (ans.size() < n)
	{
		int p = ans.back();
		for (auto i : v[p])
			if (!visited[i])
				can.insert(i);
		ans.push_back(*can.begin());
		visited[*can.begin()] = true;
		can.erase(can.begin());
	}
	for (auto i : ans)
		cout << i << " ";
	cout << endl;
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
	return 0;
}