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
#define INF 1000000009
#define mod 1000000007
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second

ll costcal(ll i, ll median)
{
    if(i>=0)
    {
        ll a= (abs(median-i))%2;
        return a;
    }
    else
    {
        ll a= ((0-i)%2+(median)%2)%2;
        return a;
    }
}

int main()
{
    ll n;
    cin>>n;
    ll sum=0, o=0, e=0;
    vector<ll> v;
    for(ll i=0;i<n;++i)
    {
        ll a;
        cin>>a;
        v.pb(a);
        sum+=a;
        if(a&1)
            o++;
        else
            e++;
        
    }
    ll median = sum/n;
    sort(v.begin(),v.end());
    vector<ll>::iterator itr;
    itr= lower_bound(v.begin(), v.end(), median);
    if(o>e)
    {
        while(!(*itr&1))
        {
            itr++;
        }
    }
    else if(o<e)
    {
        while((*itr&1))
        {
            itr++;
        }
    }
    median= *itr;
    ll cost=0;
    for(ll i=0;i<n;++i)
    {
        cost+=costcal(v[i],median);
    }
    cout<<cost<<endl;
}