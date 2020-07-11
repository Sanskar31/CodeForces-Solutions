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
    ll n,d;
    cin>>n>>d;
    multimap<ll, ll> mp;
    for(ll i=0;i<n;++i)
    {
        ll a,b;
        cin>>a>>b;
        mp.insert({a,b});
    }
    ll arr[n];
    auto q= mp.begin();
    arr[0]=(*q).second;
    q++;
    for(int i=1;i<n;++i)
    {
        arr[i]= arr[i-1]+(*q).second;
        (*q).second= arr[i];
        q++;
    }
    ll sum=INT_MIN;
    auto itr= mp.begin();
    ll i=0;
    for(i, itr;itr!=mp.end();++itr, ++i)
    {
        ll a= (*itr).first;
        ll u= a+d;
        auto it= mp.lower_bound(u);
        ll index= i;
        if(it==mp.end())
        {
            ll t;
            if(index!=0)
                t= arr[n-1]-arr[i-1];
            else
                t=arr[n-1];
            sum=max(sum, t);
            continue;
        }
        it--;
        //index= distance(mp.begin(), it);
        ll t;
        if(i!=0)
            t= (*it).second-arr[i-1];
        else
            t=(*it).second;
        sum=max(sum, t);
    }
    cout<<sum<<endl;
    return 0;
}