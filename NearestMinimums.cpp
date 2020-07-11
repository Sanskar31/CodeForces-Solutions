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
	int minn = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		minn = min(arr[i], minn);
	}
	int dist = n + 1;
	int pos = -1;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == minn)
		{
			if (pos == -1)
				pos = i;
			else
				dist = min(dist, i - pos);
			pos = i;
		}
	}
	cout << dist << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast
	int t;
	// cin >> t;
	t = 1;
	test
	return 0;
}