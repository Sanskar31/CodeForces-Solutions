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
        vector<int> v[n];
        bool taken[n+2];
        memset(taken, false, sizeof(taken));
        for(int i=0;i<n;++i)
        {
            int k;
            cin>>k;
            bool flag=false;
            for(int j=0;j<k;++j)
            {
                int a;
                cin>>a;
                if(!taken[a] && !flag)
                {
                    v[i].push_back(a);
                    taken[a]=true;
                    flag=true;
                }
            }
        }
        int j= find(taken+1, taken+n+2, 0)-taken;
        if(j==n+1)
        {
            cout<<"OPTIMAL"<<endl;
        }
        else
        {
            int i;
            for(i=0;i<n;++i)
            {
                if(v[i].size()==0)
                   break; 
            }
            cout<<"IMPROVE"<<endl<<i+1<<" "<<j<<endl;
        }
        
    }
    return 0;
}