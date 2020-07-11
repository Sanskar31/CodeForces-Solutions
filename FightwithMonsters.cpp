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
	ll n, a, b, k;
	cin >> n >> a >> b >> k;
	ll hp[n], points = 0;
	for (ll i = 0; i < n; ++i)
	{
		cin >> hp[i];
		hp[i] %= (a + b);
		if (hp[i] == 0)
			hp[i] = a + b;
		ll t = hp[i] / a;
		hp[i] = ((hp[i] + a - 1) / a) - 1;
	}
	sort(hp, hp + n);
	for (ll i = 0; i < n; ++i)
	{
		if (k - hp[i] < 0)
			break;
		points++;
		k -= hp[i];
	}
	cout << points << endl;
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