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
        string v[9];
        for(int i=0;i<9;++i)
        {
            string s;
            cin>>s;
            v[i]=s;
        }
        string arr[9];
        int j=0,k=0;
        for(int i=0;i<9;++i)
        {
            string s= v[i];
            int t=(int)(s[j]-'0');
            int a=9-t+1;
            if(t==a)
                a++;
            t=a;
            s[j]=(char)(t+48);
            arr[i]=s;   
            j+=3;
            if(j>8)
            {
                k++;
                j=k;
            }
        }
        for(int i=0;i<9;++i)
        {
             cout<<arr[i]<<endl;
        }
    }
    return 0;
}