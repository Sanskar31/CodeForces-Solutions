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

ll c = 1;
void primeFactors(ll n)
{

	while (n % 2 == 0)
	{
		c = 2;
		n = n / 2;
	}
	for (ll i = 3; i <= sqrt(n) + 1; i = i + 2)
	{

		if (n % i == 0)
		{
			if (c != 1)
			{
				c = -1;
				return;
			}
			c = i;
			while (n % i == 0)
			{
				n = n / i;
			}
		}
	}
	if (n != 1 && c != 1)
	{
		c = -1;
		return;
	}
	return;
}

void solve()
{
	ll n;
	cin >> n;
	primeFactors(n);
	if (c == 1)
		cout << n << endl;
	else if (c == -1)
		cout << 1 << endl;
	else
		cout << c << endl;
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