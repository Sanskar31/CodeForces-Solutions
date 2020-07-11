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
    int n;
    cin>>n;
    vector<int> v[n+1];
    pair<int, int> edges[n-1];
    for(int i=0;i<n-1;++i)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        edges[i]={a,b};
    }
    int flag=-1;
    for(int i=1;i<=n;++i)
    {
        if(v[i].size()>2)
        {
            flag=i;
            break;
        }
    }
    if(flag==-1)
    {
        for(int i=0;i<n-1;++i)
        {
            cout<<i<<endl;
        }
        return 0;
    }
    int count=0, start=3;
    for(int i=0;i<n-1;++i)
    {
        int a=edges[i].first;
        int b=edges[i].second;
        if( (a==flag || b==flag) && count<=2)
        {
            cout<<count<<endl;
            count++;
        }
        else
        {
            cout<<start<<endl;
            start++;
        }
    }
    return 0;
}