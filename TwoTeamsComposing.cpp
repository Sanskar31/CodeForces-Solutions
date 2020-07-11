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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int ma=0;
        map<int, int> mp;
        mp[0]=0;
        int dis=0;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            if(mp[arr[i]]==0)
                dis++;
            mp[arr[i]]++;
            if(mp[ma]<mp[arr[i]])
                ma=arr[i];
        }
        ma=mp[ma];
        if(dis<ma)
        {
            cout<<dis<<endl;
        }
        else if(dis==ma)
        {
            cout<<ma-1<<endl;
        }
        else
            cout<<ma<<endl;
    }

    return 0;
}