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
        ll prod=1, sum=0;
        ll count=0;
        for(ll i=0;i<n;++i)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                arr[i]++;
                count++;
            }
            prod*=arr[i];
            sum+=arr[i];
        }

        if(sum!=0)
        {
            cout<<count<<endl;
            continue;
        }
        else
        {
            cout<<++count<<endl;
        }
        
    }
    return 0;
}