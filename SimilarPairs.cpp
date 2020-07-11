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
	int odd = 0, even = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i] & 1)
			odd++;
		else
			even++;
	}
	if (odd % 2 == 0 && even % 2 == 0)
	{
		cout << "YES" << endl;
		return;
	}
	sort(arr, arr + n);
	bool flag = false;
	for (int i = 0; i < n - 1; ++i)
	{
		if (arr[i + 1] - arr[i] == 1 && (arr[i] & 1 ^ arr[i + 1] & 1))
		{
			flag = true;
			break;
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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