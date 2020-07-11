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

const int N = 1e7 + 2, M = N;

ll dp[2][N];

void solve()
{
	int i, n, k, j;
	cin >> n;
	dp[1][0] = 1;
	for (int steps = 1; steps < N; steps++)
	{
		dp[1][steps] = (3LL * dp[0][steps - 1]) % mod;
		dp[0][steps] = (2LL * dp[0][steps - 1] + dp[1][steps - 1]) % mod;
	}
	cout << dp[1][n] << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// fast
	int t;
	t = 1;
	// cin >> t;
	test;
#ifndef ONLINE_JUDGE
	cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
#endif
	return 0;
}