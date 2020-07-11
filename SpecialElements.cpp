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
	ll arr[n];
	ll pre[n], count[n + 1];
	memset(count, 0, sizeof(count));
	ll sum = 0;
	for (ll i = 0; i < n; ++i)
	{
		cin >> arr[i];
		sum += arr[i];
		pre[i] = sum;
		count[arr[i]]++;
	}
	ll ans = 0;
	for (ll i = 0; i < n; ++i)
	{
		ll sum = 0;
		for (ll j = i; j < n; ++j)
		{
			sum += arr[j];
			if (j == i)
				continue;
			if (sum > n)
				break;
			if (count[sum] > 0)
			{
				ans += count[sum];
				count[sum] = 0;
			}
		}
	}
	cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	fast
	ll t;
	// t = 1;
	cin >> t;
	test;
	return 0;
}