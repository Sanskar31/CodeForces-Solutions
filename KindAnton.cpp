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
        int a[n],b[n];
        int minus=-1, plus=-1;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]==-1 && minus==-1)
                minus=i;
            if(a[i]==1 && plus==-1)
                plus=i;
        }
        for(int j=0;j<n;++j)
            cin>>b[j];
        if(a[0]!=b[0])
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool flag=true;
        for(int j=n-1;j>0;--j)
        {
            int diff= b[j]-a[j];
            if(diff==0)
                continue;
            if(diff<0)
            {
                if(minus>=j || minus==-1)
                {
                    flag=false;
                    break;
                }
            }
            else 
            {
                if(plus>=j || plus==-1)
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}