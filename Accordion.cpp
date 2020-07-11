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
    string str;
    cin>>str;
    int n=str.length();
    int a=0, b=n-1;
    for(;a<b;++a)
    {
        if(str[a]=='[')
            break;
    }
    for(;a<b;--b)
    {
        if(str[b]==']')
            break;
    }
    for(;a<b;++a)
    {
        if(str[a]==':')
            break;
    }
    for(;a<b;--b)
    {
        if(str[b]==':')
            break;
    }
    if(a==b)
    {
        cout<<-1<<endl;
        return 0;
    }
    int count=4;
    for(;a<b;++a)
    {
        if(str[a]=='|')
            count++;
    }
    cout<<count<<endl;
    return 0;
}