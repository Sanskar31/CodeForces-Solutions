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
	ll n, k;
	cin >> n >> k;
	priority_queue<ll, vector<ll>, greater<ll> > common, alice, bob;
	ll ca = 0, cb = 0;
	for (ll i = 0; i < n; ++i)
	{
		ll t, a, b;
		cin >> t >> a >> b;
		if (a && b)
			common.push(t);
		else if (a)
			alice.push(t);
		else if (b)
			bob.push(t);
		if (a == 1)
			ca++;
		if (b == 1)
			cb++;
	}
	if (cb < k || ca < k)
	{
		cout << -1 << endl;
		return;
	}
	ll count = 0, sum = 0;
	while (count < k)
	{
		if (!common.empty())
		{
			if (alice.empty() || bob.empty() || (common.top() <= alice.top() + bob.top()))
			{
				sum += common.top();
				common.pop();
				count++;
			}
			else
			{
				count++;
				sum += alice.top();
				alice.pop();
				sum += bob.top();
				bob.pop();
			}
		}
		else
		{
			count++;
			sum += alice.top();
			alice.pop();
			sum += bob.top();
			bob.pop();
		}
	}
	cout << sum << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
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