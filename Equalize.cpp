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
    string a,b;
    cin>>a>>b;
    int count=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]!=b[i])
        {
            if(i==n-1)
                count++;
            else if(a[i+1]!=b[i+1] && a[i]!=a[i+1])
            {
                count+=1;
                i++;
            }
            else
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}