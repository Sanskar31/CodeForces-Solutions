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
	ll dp[n][2];
	ll c[n];
	for (ll i = 0; i < n; ++i)
		cin >> c[i];
	string a[n], b[n];
	for (ll i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		a[i] = s;
		reverse(s.begin(), s.end());
		b[i] = s;
	}

	dp[0][0] = 0, dp[0][1] = c[0];
	for (ll i = 1; i < n; ++i)
	{
		dp[i][0] = 1e18, dp[i][1] = 1e18;
		if (a[i - 1] <= a[i])
			dp[i][0] = min(dp[i][0], dp[i - 1][0]);
		if (b[i - 1] <= a[i])
			dp[i][0] = min(dp[i][0], dp[i - 1][1]);
		if (a[i - 1] <= b[i])
			dp[i][1] = min(dp[i][1], dp[i - 1][0] + c[i]);
		if (b[i - 1] <= b[i])
			dp[i][1] = min(dp[i][1], dp[i - 1][1] + c[i]);
	}
	ll ans = min(dp[n - 1][0], dp[n - 1][1]);
	cout << (ans == 1e18 ? -1 : ans) << endl;
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