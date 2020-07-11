/*
Author: Sanskar Agarwal
Nick: sanskaragarwal
Birla Institute Of Technology, Mesra
*/
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define MAX 1000000
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

using namespace std;

int main()
{
    ll int n;
    cin>>n;
    ll int e=0,q=0,r=0;
    for(int i=0;i<n;++i)
    {
        ll int t;
        cin>>t;
        if(t>1)
        {
            e+= t-1;
        }
        if(t<0)
        {
            e+=abs(t)-1;
            q++;
        }
        else if(t==0)
        {
            r++;
        }
    }
    e+=r;
    if(q&1 && r<=0)
    {
        e+=2;
    }
    cout<<e<<endl;
}