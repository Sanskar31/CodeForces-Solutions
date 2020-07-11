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
	pair<int, int> p[m];
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		p[i] = make_pair(a, b);
	}
	bool flag = true;
	int x = p[0].first;
	for (int i = 0; i < 2; ++i)
	{
		int y = -1;
		set<int> s;
		flag = true;
		for (int j = 1; j < m; ++j)
		{
			if (p[j].first == x || p[j].second == x)
				continue;
			if (s.empty())
			{
				s.insert(p[j].first);
				s.insert(p[j].second);
			}
			else if (y != -1)
			{
				if (p[j].first != y && p[j].second != y)
				{
					flag = false;
					break;
				}
			}
			else
			{
				auto itr = s.find(p[j].first);
				auto jtr = s.find(p[j].second);
				if (itr != s.end() && jtr != s.end())
					continue;
				if (itr != s.end())
					y = *itr;
				else
				{
					itr = s.find(p[j].second);
					if (itr != s.end())
						y = *itr;
					else
					{
						flag = false;
						break;
					}
				}
			}
		}
		if (flag)
			break;
		x = p[0].second;
	}

	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}