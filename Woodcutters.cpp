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

ll dp[100005][3];
ll n, h[100005], x[100005];

ll cut(ll i, ll prev)
{
	if (i >= n)
		return 0;
	if (dp[i][prev] != -1)
		return dp[i][prev];

	ll a = 0, b = 0, c = 0;
	if (prev == -1)
	{
		if (x[i - 1] < x[i] - h[i])
			a = 1 + cut(i + 1, -1);
		c = cut(i + 1, 0);
	}
	else if (prev == 0)
	{
		if ((i == 0) || (x[i] - h[i] > x[i - 1]))
			a = 1 + cut(i + 1, -1);
		c = cut(i + 1, 0);
	}
	else if (prev == 1)
	{
		if (x[i - 1] + h[i - 1] < x[i] - h[i])
			a = 1 + cut(i + 1, -1);
		if (x[i - 1] + h[i - 1] < x[i])
			c = cut(i + 1, 0);
	}
	if ((i == n - 1) || (x[i] + h[i] < x[i + 1]))
		b = 1 + cut(i + 1, 1);

	return dp[i][prev] = max(a, max(b, c));

}

void solve()
{
	cin >> n;
	memset(dp, -1, sizeof(dp));
	for (ll i = 0; i < n; ++i)
	{
		cin >> x[i];
		cin >> h[i];
	}
	cout << cut(0, 0) << endl;
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