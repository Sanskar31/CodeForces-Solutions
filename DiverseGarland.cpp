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

string s;
int n;

void change(int i)
{
    if(s[i]=='R')
    {
        if(i==n-1)
            s[i]='G';
        if(s[i+1]!='G')
            s[i]='G';
        else 
            s[i]='B';
    }
    else if(s[i]=='G')
    {
        if(i==n-1)
            s[i]='R';
        if(s[i+1]!='R')
            s[i]='R';
        else 
            s[i]='B';
    }
    else
    {
        if(i==n-1)
            s[i]='R';
        if(s[i+1]!='R')
            s[i]='R';
        else 
            s[i]='G';
    }
    
}

int main()
{
    fast
    cin>>n;
    int count=0;
    cin>>s;
    for(int i=0;i<n;++i)
    {
        if(i==0)
            continue;
        if(s[i]==s[i-1])
        {
            count++;
            change(i);
        }
    }
    cout<<count<<endl;
    for(int i=0;i<n;++i)
        cout<<s[i];
    cout<<endl;
    return 0;
}