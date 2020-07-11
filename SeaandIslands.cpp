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
	int n, k;
	cin >> n >> k;
	int maxx = (n * n + 1) / 2;
	if (k > maxx)
	{
		cout << "NO" << endl;
		return;
	}
	if (k == 0)
	{
		cout << "YES" << endl;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
				cout << "S";
			cout << endl;
		}
		return;
	}
	int arr[n][n];
	memset(arr, 0, sizeof(arr));
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		int j = i % 2;
		for (j; j < n; j += 2)
		{
			arr[i][j] = 1;
			count++;
			if (count == k)
				break;
		}
		if (count == k)
			break;
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr[i][j])
				cout << "L" ;
			else
				cout << "S" ;
		}
		cout << endl;
	}
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