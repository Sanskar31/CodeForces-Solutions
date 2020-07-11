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

int main()
{
    fast
    ll n;
    cin>>n;
    ll arr[n];
    map<ll, ll> mp;
    mp[0]=-1;
    ll sum=0, ans=0, mx=0;
    for(ll i=1;i<=n;++i)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(mp.find(sum)!=mp.end())
        {
            if(sum==0 && mp[0]==-1)
                mx= max(mx, 1LL);
            else 
                mx= max(mx, mp[sum]+1LL);
        }
        mp[sum]=i;
        ans+=i-mx;
    }
    cout<<ans<<endl;
    return 0;
}