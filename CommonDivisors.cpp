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

ll commonDiv(ll arr[], ll n)
{
    ll result=arr[0];
    for(ll i=1;i<n;++i)
    {
        result= __gcd(result, arr[i]);
    }
    ll count;
    if(result==1)
        return 1;
    count=0;
    for(ll i=1;i<=sqrt(result);++i)
    {
        if(result%i==0)
        {
            if(i!=sqrt(result))
                count+=2;
            else 
                count+=1;
        }
    }
    return count;
}

int main()
{
    fast
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;++i)
        cin>>arr[i];
    cout<<commonDiv(arr, n)<<endl;
    return 0;
}