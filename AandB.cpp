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

#define SIZE 200005

ll sum[SIZE];

void init()
{
	for (ll i = 0; i < SIZE; ++i)
		sum[i] = ((i + 1) * (i + 2)) / 2;
}

void solve()
{
	ll a, b;
	cin >> a >> b;
	if (a == b)
	{
		cout << 0 << endl;
		return;
	}
	ll c = min(a, b);
	ll d = max(a, b);
	ll diff = d - c;
	ll t = lower_bound(sum, sum + SIZE, diff) - sum;
	ll ans = t + 1;
	while (diff % 2 != sum[t] % 2)
	{
		ans++;
		t++;
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
	ll t;
	init();
	// t = 1;
	cin >> t;
	test;
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}