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
    string s;
    cin>>s;
    int n= s.length();
    vector<int> ab,ba;
    for(int i=0;i<n-1;++i)
    {
        if(s[i]=='A' && s[i+1]=='B')
            ab.push_back(i);
        else if(s[i]=='B' && s[i+1]=='A')
            ba.push_back(i);
    }
    int i=0,j=0;
    int flag=false;
    if(ab.size()==0 || ba.size()==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<ab.size();++i)
    {
        for(int j=0;j<ba.size();++j)
        {
            int t1= ab[i];
            int t2= ba[j];
            if(t1+1!=t2 && t2+1!=t1)
            {
                flag=true;
                break;
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}