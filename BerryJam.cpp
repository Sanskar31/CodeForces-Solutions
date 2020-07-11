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
#define test ll t;cin>>t;while(t--){solve();};

void solve()
{
    ll n;
    cin>>n;
    ll arr[2*n];
    ll s=0,b=0;
    for(ll i=0;i<2*n;++i)
    {
        cin>>arr[i];
        if(arr[i]==1)
            s++;
        else 
            b++;
    }
    ll d=s-b;
    if(d==0)
    {
        cout<<0<<endl;
        return;
    }
    s=0,b=0;
    ll ans= INT_MAX;
    map<ll, ll> mp;
    for(ll i=n;i<2*n;++i)
    {
        if(arr[i]==1)
            s++;
        else 
            b++;
        ll y= s-b;
        if(mp[y]==0)
            mp[y]=i;
        if(y==d)
            ans= min(i-n+1,ans);
    }
    s=0,b=0;
    for(ll i=n-1;i>=0;--i)
    {
        if(arr[i]==1)
            s++;
        else 
            b++;
        ll y=s-b;
        if(y==d)
            ans=min(n-i,ans);
        if(mp[d-y]!=0)
            ans=min(mp[d-y]-i+1,ans);
    }
    cout<<ans<<endl;
}

int main()
{
    fast
    test
    return 0;
}