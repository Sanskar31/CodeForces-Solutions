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

const int maxn = 1100;
int n, m, a[maxn][maxn], f1[maxn][maxn], f2[maxn][maxn], f3[maxn][maxn], f4[maxn][maxn], ans;

void solve()
{
    int i, j;
    cin>>n>>m;
    for(i=1; i<=n; ++i)
        for(j=1; j<=m; ++j)
           cin>>a[i][j];
 
    for(i=1; i<=n; ++i)
        for(j=1; j<=m; ++j)
            f1[i][j] = max(f1[i-1][j], f1[i][j-1]) + a[i][j];
 
    for(i=1; i<=n; ++i)
        for(j=m; j>=1; --j)
            f2[i][j] = max(f2[i][j+1], f2[i-1][j]) + a[i][j];
 
    for(i=n; i>=1; --i)
        for(j=1; j<=m; ++j)
            f3[i][j] = max(f3[i][j-1], f3[i+1][j]) + a[i][j];
 
    for(i=n; i>=1; --i)
        for(j=m; j>=1; --j)
            f4[i][j] = max(f4[i][j+1], f4[i+1][j]) + a[i][j];
 
    ans = 0;
    for(i=2; i<n; ++i)
        for(j=2; j<m; ++j)
            ans = max(ans, max(f1[i-1][j] + f2[i][j+1] + f3[i][j-1] + f4[i+1][j],
			f1[i][j-1] + f2[i-1][j] + f3[i+1][j] + f4[i][j+1]) );
    cout<<ans<<endl;
}

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	fast
	int t;
	t = 1;
	// cin >> t;
	test;
	return 0;
}