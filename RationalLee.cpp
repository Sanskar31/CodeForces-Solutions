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
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for (ll i = 0; i < n; ++i)
		cin >> a[i];
	ll w[k];
	for (ll i = 0; i < k; ++i)
		cin >> w[i];
	sort(a, a + n);
	sort(w, w + k);

	pair<ll, ll> val[k];
	ll j = n - 1;
	for (ll i = 0; i < k; ++i)
	{
		val[i] = {0, 0};
		val[i].first = a[j];
		j--;
	}
	j = 0;
	for (ll i = k - 1; i >= 0; --i)
	{
		ll cap = w[i] - 1;
		if (cap == 0)
		{
			val[i].second = val[i].first;
			continue;
		}
		val[i].second = a[j];
		j += cap;
	}
	ll sum = 0;
	for (auto i : val)
		sum += i.first + i.second;
	cout << sum << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	fast
	int t;
	// t = 1;
	cin >> t;
	test;
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}