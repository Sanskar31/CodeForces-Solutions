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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	map<int, int> dp;

	int ans = 0;
	int lst = 0;
	for (int i = 0; i < n; ++i)
	{
		int x = a[i];
		dp[x] = dp[x - 1] + 1;
		if (ans < dp[x])
		{
			ans = dp[x];
			lst = x;
		}
	}

	vector<int> res;
	for (int i = n - 1; i >= 0; --i)
	{
		if (a[i] == lst)
		{
			res.push_back(i);
			--lst;
		}
	}
	reverse(res.begin(), res.end());

	cout << ans << endl;
	for (auto it : res)
		cout << it + 1 << " ";
	cout << endl;
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
	return 0;
}