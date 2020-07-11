/*
Author: Sanskar Agarwal
Nick: sanskarag
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
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;++i)
        cin>>arr[i];
    sort(arr, arr+n);
    ll sum=0, ans[n];
    for(ll i=0;i<n;++i)
    {
        sum+=arr[i];
        ans[i]=sum;
        if(i>=m)
            ans[i]+=ans[i-m];
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}