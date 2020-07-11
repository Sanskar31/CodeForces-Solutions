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
	ll a = arr[0], b = 0, moves = 1;
	ll pa = arr[0], pb = 0;
	ll i = 1, j = n - 1, chance = 1;
	while (i <= j)
	{
		moves++;
		if (chance == 0)
		{
			ll curr = 0;
			while (curr <= pb && i <= j)
			{
				curr += arr[i];
				i++;
			}
			chance = (chance + 1) % 2;
			pa = curr;
			a += curr;
		}
		else
		{
			ll curr = 0;
			while (curr <= pa && i <= j)
			{
				curr += arr[j];
				j--;
			}
			chance = (chance + 1) % 2;
			pb = curr;
			b += curr;
		}
	}
	cout << moves << " " << a << " " << b << endl;
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