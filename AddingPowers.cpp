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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;++i)
            cin>>arr[i];

        sort(arr, arr+n);
        ll num=1;
        vector<pair<ll, ll>> v;
        v.push_back({num,0});
        ll p=1;
        while(1)
        {
            num*=k;
            if(num>arr[n-1])
                break;
            v.push_back({num,p});
            p++;
        }
        bool done= true;
        ll s= v.size();
        ll used[s]={0};

        for(ll i=0;i<n;++i)
        {
            ll a= arr[i];
            if(a==0)
            {
                done= true;
                continue;
            }
            ll j=s-1;
            while(a!=0 && j>=0)
            {
                if(a<0)
                {
                    done=false;
                    break;
                }
                if(a-(v[j].first)<0)
                {
                    j--;
                    continue;
                }
                a=a-(v[j].first);
                if(used[v[j].second])
                {
                    done=false;
                    break;
                }
                else
                {
                    used[v[j].second]=1;
                }
                j--;
            }
            if(done==false || a!=0)
            {
                done=false;
                break;
            }
        }
        if(done)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}