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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll j=2;
        if((n/2)&1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(ll i=0;i<n/2;++i)
        {
            arr[i]=j;
            j+=2;
        }
        j=1;
        for(ll i=n/2;i<n-1;++i)
        {
            arr[i]=j;
            j+=2;
        }
        arr[n-1]= (n/2-1)+arr[n/2-1];
        cout<<"YES"<<endl;
        for(ll i=0;i<n;++i)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}