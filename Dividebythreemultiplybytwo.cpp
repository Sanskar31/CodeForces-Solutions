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
	for (ll i = 0; i < n; ++i)
		cin >> arr[i];
	sort(arr, arr + n);
	ll out[n], in[n];
	for (int i = 0; i < n; ++i)
	{
		in[i] = -1;
		out[i] = -1;
	}
	for (ll i = 0; i < n; ++i)
	{
		ll t = find(arr, arr + n, arr[i] * 2) - arr;
		if (t != n)
		{
			out[i] = t;
			in[t] = i;
		}
		t = find(arr, arr + n, arr[i] / 3) - arr;
		if (t != n)
		{
			if (arr[t] * 3 == arr[i])
			{
				out[i] = t;
				in[t] = i;
			}
		}
	}
	ll start = -1;
	for (ll i = 0; i < n; ++i)
	{
		if (in[i] == -1)
		{
			start = i;
			break;
		}
	}
	ll i = start;
	while (out[i] != -1)
	{
		cout  << arr[i] << " ";
		i = out[i];
	}
	cout  << fixed << arr[i] << " ";
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