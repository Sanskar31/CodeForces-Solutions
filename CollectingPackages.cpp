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
        pair<int, int> p[n];
        for(int i=0;i<n;++i)
        {
            int x,y;
            cin>>x>>y;
            p[i]= {x,y};
        }
        sort(p, p+n);
        int x=0,y=0;
        bool flag= true;
        queue<char> q;
        for(int i=0;i<n;++i)
        {
            int x1= p[i].first;
            int y1= p[i].second;
            if(x1<x || y1<y)
            {
                flag= false;
                break;
            }
            int x0= x1-x;
            int y0= y1-y;
            while(x0--)
                q.push('R');
            while(y0--)
                q.push('U');
            x=x1,y=y1;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            while(!q.empty())
            {
                cout<<q.front();
                q.pop();
            }
            cout<<endl;
        }
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}