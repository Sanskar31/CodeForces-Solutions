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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;++i)
            cin>>a[i];
        for(int i=0;i<n;++i)
            cin>>b[i];

        int p1=0,p2=0;
        while(p1<n && a[p1]==b[p1])
            p1++;
        if(p1==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int diff=a[p1]-b[p1];
        if(diff>0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        p2=p1+1;
        while(p2<n && a[p2]-b[p2]==diff)
            p2++;
        if(p2==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        p1=p2;
        while(p1<n && a[p1]==b[p1])
            p1++;
        if(p1==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            continue;
        }
    }
    return 0;
}