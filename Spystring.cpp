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
	int n, m;
	cin >> n >> m;
	string arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	bool flag = true;
	string ans = arr[0];


	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < 26; ++j)
		{
			flag = true;
			ans[i] = (char)(j + 'a');
			char c = ans[i];
			for (int k = 1; k < n; ++k)
			{
				int count = 0;
				for (int q = 0; q < m; ++q)
				{
					if (arr[k][q] != ans[q])
						count++;
					if (count > 1)
						break;
				}
				if (count > 1)
				{
					flag = false;
					break;
				}
			}
			if (flag)
				break;
			ans = arr[0];
		}
		if (flag)
			break;
	}
	if (flag)
		cout << ans << endl;
	else
		cout << -1 << endl;
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