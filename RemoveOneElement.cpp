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
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	int l[n], r[n];
	for (int i = 0; i < n; ++i)
	{
		l[i] = 1;
		r[i] = 1;
	}
	int maxx = 0;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > arr[i - 1])
			l[i] = l[i - 1] + 1;
		maxx = max(maxx, l[i]);
	}
	for (int i = n - 2; i >= 0; --i)
	{
		if (arr[i] < arr[i + 1])
			r[i] = r[i + 1] + 1;
	}
	for (int i = 1; i < n - 1; ++i)
	{
		if (arr[i + 1] > arr[i - 1])
			maxx = max(maxx, l[i - 1] + r[i + 1]);
	}
	cout << maxx << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	fast
	int t;
	t = 1;
	// cin >> t;
	test;
	return 0;
}