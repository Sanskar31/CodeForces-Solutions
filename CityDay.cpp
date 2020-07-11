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
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    for(int i=0;i<n;++i)
    {
        int l= i-x;
        if(l<0)
            l=0;
        int u= i+y;
        if(u>=n)
            u=n-1;
        int c=1;
        for(int j=l;j<=u;++j)
        {
            if(arr[j]<arr[i])
            {
                c=0;
                break;
            }
        }
        if(c)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
}