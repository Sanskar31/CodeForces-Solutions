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
    int n,m,l;
    cin>>n>>m>>l;
    int check[n+5];
    for(int i=0;i<n+5;++i)
        check[i]=0;
    int arr[n];
    arr[0]=0;
    int count=0;
    for(int i=1;i<=n;++i)
    {
        cin>>arr[i];
        if(arr[i]>l)
        {
            if(check[i-1] && check[i+1])
                count--;
            else if(!check[i-1] && !check[i+1])
                count++;
            check[i]=1;
        }
    }
    check[0]=0;
    for(int i=1;i<=m;++i)
    {
        int q;
        cin>>q;
        if(!q)
            cout<<count<<endl;
        else
        {
            int a,b;
            cin>>a>>b;
            arr[a]+=b;
            if(arr[a]>l && !check[a])
            {
                if(check[a-1] && check[a+1])
                {
                    // cout<<check[a-1]<<" "<<check[a+1]<<endl;
                    count--;
                }
                else if(!check[a-1] && !check[a+1])
                    count++;
                check[a]=1;
            }
        }
    }
    return 0;
}