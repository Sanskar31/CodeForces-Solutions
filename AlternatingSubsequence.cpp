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
        ll pr=0;
        ll count=0;
        for(ll i=0;i<n;++i)
        {
            cin>>arr[i];
            if(arr[i]>0 && (pr==0 || pr==-1))
            {
                count++;
                pr=1;
            }
            else if(arr[i]<0 && (pr==0 || pr==1))
            {
                count++;
                pr=-1;
            }
        }   
        ll sum=0;
        if(arr[0]>0)
            pr=1;
        else 
            pr=-1;
        for(ll i=0;i<n;++i)
        {
            if(count==0)
                break;
            if(pr==-1)
            {
                ll maxx=INT_MIN;
                while(arr[i]<0 && i<n)
                {
                    maxx= max(maxx, arr[i]);
                    i++;
                }
                i--;
                //cout<<maxx<<endl;
                pr=1;
                sum+=maxx;
            }
            else 
            {
                ll maxx= INT_MIN;
                while(arr[i]>0 && i<n)
                {
                    maxx=max(maxx, arr[i]);
                    i++;
                }
                i--;
                //cout<<maxx<<endl;
                sum+=maxx;
                pr=-1;
            }
            count--;
        }
        cout<<sum<<endl;
    }
    return 0;
}