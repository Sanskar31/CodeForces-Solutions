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

ll add(ll num)
{
	ll n = num;
	ll maxx = 0, minn = 10;
	while (num != 0)
	{
		ll t = num % 10;
		minn = min(minn, t);
		maxx = max(maxx, t);
		num /= 10;
	}
	return minn * maxx + n;
}

void solve()
{
	ll a, k;
	cin >> a >> k;
	ll num = a;
	k--;
	while (k--)
	{
		ll temp = add(num);
		if (temp == num)
			break;
		num = temp;
	}
	cout << num << endl;
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
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}