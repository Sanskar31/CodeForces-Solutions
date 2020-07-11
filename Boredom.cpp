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

ll cnt[100005], dp[100005];

ll maxPolls(ll i)
{
    if(i==1)
        return cnt[1];
    if(i==0)
        return 0;
    if(dp[i]!=-1)
        return dp[i];
    return dp[i]= max(maxPolls(i-1), cnt[i]*i+maxPolls(i-2));
}

int main()
{
    fast
    ll n;
    cin>>n;
    memset(cnt, 0, sizeof(cnt));
    ll maxx=0;
    for(ll i=0;i<n;++i)
    {
        ll a;
        cin>>a;
        maxx=max(a, maxx);
        cnt[a]++;
    }
    for(ll i=0;i<=maxx;++i)
        dp[i]=-1;
    cout<<maxPolls(maxx)<<endl;
    return 0;
}