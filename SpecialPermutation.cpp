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
	if (n <= 3)
	{
		cout << -1 << endl;
		return;
	}
	vector<int> arr;
	int start = n;
	if (n % 2 == 0)
		start--;
	for (int i = start; i >= 1; i -= 2)
		arr.push_back(i);
	arr.push_back(4);
	arr.push_back(2);
	for (int i = 6; i <= n; i += 2)
		arr.push_back(i);
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
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
	return 0;
}