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
    int n,k;
    cin>>n>>k;
    cin>>s;
    int l=0, r=0;
    /*
    for(int i=0;i<n;++i)
    {
        if(s[i]=='a')
            counta++;
        else 
            countb++;
    }
    */
    int ans=INT_MIN, kt=0, tempAns=0;
    while(l<n && r<n)
    {   
        if(s[r]=='a')
        {
            tempAns++;
            r++;
        }
        else if(kt<k)
        {
            tempAns++;
            kt++;
            r++;
        }
        else
        {
            while(s[l]!='b')
            {
                l++;
                tempAns--;
            }
            l++;
            r++;
        }
        ans=max(ans, tempAns);
    }
    l=0,r=0,tempAns=0,kt=0;
    while(l<n && r<n)
    {   
        //cout<<l<<" "<<r<<" "<<tempAns<<endl;
        if(s[r]=='b')
        {
            tempAns++;
            r++;
        }
        else if(kt<k)
        {
            tempAns++;
            kt++;
            r++;
        }
        else
        {
            while(s[l]!='a')
            {
                l++;
                tempAns--;
            }
            l++;
            r++;
        }
        ans=max(ans, tempAns);
    }
    cout<<ans<<endl;
    return 0;
}