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
bool done[2005][2005];
queue<pair<ll, ll> > q;
ll dx[4] = { -1, 1, 0, 0}, dy[4] = {0, 0, 1, -1};

void bfs()
{
	ll x, y;
	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (ll i = 0; i < 4; ++i)
		{
			if (x + dx[i] > 0 && x + dx[i] <= n && y + dy[i] > 0 && y + dy[i] <= m)
			{
				if (done[x + dx[i]][y + dy[i]])
					continue;
				done[x + dx[i]][y + dy[i]] = true;
				q.push(make_pair(x + dx[i], y + dy[i]));
			}
		}
	}
	cout << x << " " << y << endl;
}

void solve()
{
	cin >> n >> m;
	cin >> k;
	pair<ll, ll> p[k];
	for (ll i = 0; i < k; ++i)
	{
		ll x, y;
		cin >> x >> y;
		q.push(make_pair(x, y));
		done[x][y] = true;
	}
	bfs();
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	fast
	ll t;
	t = 1;
	// cin >> t;
	test;
#ifndef ONLINE_JUDGE
	cout << "\nreach Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}