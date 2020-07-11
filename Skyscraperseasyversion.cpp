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

ll n, m[1005];

void solve()
{
	cin >> n;
	for (ll i = 0; i < n; ++i)
		cin >> m[i];
	ll maxx = 0;
	vector<ll> height;
	for (ll i = 0; i < n; ++i)
	{
		ll sum = 0;
		sum += m[i];
		ll high = m[i];
		vector<ll> ans;
		for (ll j = i - 1; j >= 0; --j)
		{
			sum += min(high, m[j]);
			ans.push_back(min(high, m[j]));
			high = min(m[j], high);
		}
		reverse(ans.begin(), ans.end());
		ans.push_back(m[i]);
		high = m[i];
		for (ll j = i + 1; j < n; ++j)
		{
			sum += min(high, m[j]);
			ans.push_back(min(high, m[j]));
			high = min(m[j], high);
		}
		if (maxx < sum)
		{
			maxx = sum;
			height.clear();
			for (auto j : ans)
				height.push_back(j);
		}
	}
	for (auto i : height)
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
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}